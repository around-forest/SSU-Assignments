import java.util.Scanner;
public class assignment2_14 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        String course[] = {"Java", "C++", "HTML5", "컴퓨터구조", "안드로이드"};
        int score[] = {95, 88, 76, 62, 55};
        String name;

        while(true){
            System.out.print("과목 이름 >> ");
            String subject = scanner.next();

            if(subject.equals("그만")){
                break;
            }

            int i = 0;
            for(int j = 0; j<5; j++){
                if(course[j].equals(subject)){
                    System.out.println(course[j]+"의 점수는 "+score[j]);
                    i++;
                }
            }
            if(i == 0){
                System.out.println("없는 과목입니다.");
            }
        }
    }
}
