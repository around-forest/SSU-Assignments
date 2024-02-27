import java.util.Scanner;
class Dictionary {
    private static String[] kor = {"사랑", "아기", "돈", "미래", "희망"};
    private static String[] eng = {"love", "baby", "money", "future","hope"};

    public static String kor2Eng(String word){
        for(int i = 0; i<kor.length; i++){
            if(word.equals(kor[i])){
                if(i%2 == 0){
                    System.out.println(word+"은 "+eng[i]);
                }
                else{
                    System.out.println(word+"는 "+eng[i]);
                }
                return null;
            }
        }
        System.out.println(word+"는 저의 사전에 없습니다.");
        return null;
    }
}

public class Assignment3_10 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String search;
        Dictionary dictionary = new Dictionary();

        System.out.println("한영 단어 검색 프로그램입니다.");
        while(true){
            System.out.print("한글 단어?");
            search = sc.next();

            if(search.equals("그만")){
                break;
            }

            dictionary.kor2Eng(search);
        }
    }
}

