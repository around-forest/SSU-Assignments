#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
#define ENG 0
#define KOR 1

struct words {
    char word[15];
    char meaning[30];
};

struct fwords {
    char word[15];
    char meaning[30];
    struct fwords *next;
};
typedef struct fwords ELEMENT;
typedef ELEMENT *LINK; // 자기참조구조체
 
void MENU()
{
    printf("1. 영어 단어 맞추기\n");
    printf("2. 프로그램 종료\n");
    printf("\n메뉴를 선택하세요 : "); 
}
 
int word_count()
{
    FILE *fp;
    char list[50] = "\0";
    fp = fopen("dic.txt", "r");
    int i;
    
    for (i = 0; i < 20000; i++) {
        if (fscanf(fp, "%s", list) == EOF) break;
    }
 
    fclose(fp);
 
    return i/2;
}
 
void read_word(struct words *words, int n)
{
    FILE *fp;
    char list[50] = {""};
    char *temp;
    int language;
    
    fp = fopen("dic.txt", "rt");
    
    for (int i = 0; i < n; i++) {
        fgets(list, 50, fp);
 
        temp = words[i].word;
        language = ENG;
        
        for (int j = 0; j < 50; j++) {
            if (list[j] == '\0') {
                *temp = '\0';
                break;
            }
            else if (list[j] == ' ' && language == ENG) {
                *temp = '\0';
                temp = words[i].meaning;
                language = KOR;
            }
            *temp = list[j];
            temp++;
        }
    }
 
    fclose (fp);
}

LINK words_list(char e[], char k[], int n){
    LINK head;
    if(e[0] == '\0')
        return NULL;
    else{
        head = malloc(sizeof(ELEMENT) * n);
        strcpy(head -> word, e);
        strcpy(head -> meaning, k);
        head -> next = words_list(e + 45, k + 45, n);
        return head;
    }
}
 
void sort_words(struct words *s, int n){
    char temp[30];

    for (int j = 0; j < n-1; j++) {
        for (int k = 0; k < n-j-1; k++) {
            if (strcmp(s[k].word, s[k+1].word) > 0) {
                strcpy(temp, s[k].word);
                strcpy(s[k].word, s[k+1].word);
                strcpy(s[k+1].word, temp);
                strcpy(temp, s[k].meaning);
                strcpy(s[k].meaning, s[k+1].meaning);
                strcpy(s[k+1].meaning, temp);
            }
        }
    }
}
 
void words_test(struct words *t, int n)
{
    int score = 0;
    char answer[15] = "\0";
    char quit_[] = ".quit";
    
    for(int i = 1; i < n; i++){
        printf("뜻 : %s\n단어 : ", t[i].meaning);
        scanf("%s", answer);
        if (strcmp(answer, t[i].word) == 0) {
                printf("Correct!\n\n");
                score++;
        }
        else if (strcmp(answer, quit_) == 0){
            printf("\n시험을 종료합니다.\n");
            break;
        }
        else{ 
            printf("Incorrect!\n\n");
        }
    }

    
    printf("\n 총 %d개 중 %d개 맞췄습니다.\n", n, score); 
 
    
}

void print_list(LINK head){
    if(head == NULL) printf("NULL\n");
    else { printf("%s %s --> ", head -> word, head -> meaning); print_list(head -> next);}
}

int main()
{
    int count, menu;
    struct words *s, *r;
    LINK h;
    count = word_count();
    
    printf("단어 개수 : %d\n\n", count);
 
    r = (struct words *)malloc(sizeof(struct words) * count);
 
    read_word(r, count); //문제 없이 작동
    /*
    for(int i = 0; i<count; i++){
    printf("%s %s\n", r[i].word, r[i].meaning);
    }
    */
    
    sort_words(r, count); // 작동
    /*
    for(int i = 0; i<count; i++){
    printf("%s %s\n", r[i].word, r[i].meaning);
    }
    */
    
    h = words_list(r->word, r->meaning, count); // 성공적..?
    //print_list(h);
    
    while (1) {
        MENU();
        scanf("%d", &menu);
        if (menu == 1) {
            printf("\n단어 시험을 시작합니다.\n\n");
            words_test(r, count); // 문제 발생..?
            break;
        }
        else if(menu == 2){
            printf("\n종료합니다.\n");
            sleep(2);
            free(r);
            system("clear");
            return 0;
        }
        else
            printf("\n다시 입력하세요.\n\n");
    }
 
    return 0;
}
