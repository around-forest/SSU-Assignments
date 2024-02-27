import java.util.Scanner;
public class question12_1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("연산>>");
        int answer = 0;

        int a = scanner.nextInt();
        String c = scanner.next();
        int b = scanner.nextInt();

        if(c.equals("+")){
            answer = a + b;
            System.out.print(a+c+b+"의 계산 결과는 "+answer);
        }
        else if(c.equals("-")){
            answer = a - b;
            System.out.print(a+c+b+"의 계산 결과는 "+answer);
        }
        else if(c.equals("*")){
            answer = a * b;
            System.out.print(a+c+b+"의 계산 결과는 "+answer);
        }
        else{
            if(b == 0){
                System.out.print("0으로 나눌 수 없습니다.");
            }
            else{
                answer = a / b;
                System.out.print(a+c+b+"의 계산 결과는 "+answer);
            }
        }
        scanner.close();
    }
}
