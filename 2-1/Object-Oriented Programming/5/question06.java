import java.util.Scanner;
public class question06 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("1~99 사이의 정수를 입력하시오>>");
        int a;
        a = scanner.nextInt();

        if (a % 10 == 3 || a % 10 == 6 || a % 10 == 9) {
            if (a / 10 == 3 || a / 10 == 6 || a / 10 == 9) {
                System.out.print("박수짝짝");
            } else {
                System.out.print("박수짝");
            }
        }
        else{
            System.out.print("3, 6, 9 중 하나도 없습니다.");
        }
        scanner.close();
    }
}
