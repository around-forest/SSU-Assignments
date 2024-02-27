import java.util.Scanner;
public class question12_2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("연산>>");
        int answer;

        int a = scanner.nextInt();
        String c = scanner.next();
        int b = scanner.nextInt();

        switch (c){
            case "+" :
                answer = a + b;
                System.out.print(a+c+b+"의 계산 결과는 "+answer);
                break;

            case "-" :
                answer = a - b;
                System.out.print(a+c+b+"의 계산 결과는 "+answer);
                break;

            case  "*" :
                answer = a * b;
                System.out.print(a+c+b+"의 계산 결과는 "+answer);
                break;

            case "/" :
                if(b == 0){
                    System.out.print("0으로 나눌 수 없습니다.");
                }
                else{
                    answer = a / b;
                    System.out.print(a+c+b+"의 계산 결과는 "+answer);
                    break;
                }
        }
        scanner.close();
    }
}
