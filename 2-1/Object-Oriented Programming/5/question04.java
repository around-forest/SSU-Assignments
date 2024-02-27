import java.util.Scanner;
public class question04 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("정수 3개 입력>>");
        int a, b, c;
        a = scanner.nextInt();
        b = scanner.nextInt();
        c = scanner.nextInt();
        if(a < b && b < c){
            System.out.print("중간 값은 " + b);
        }
        else if(b < a && a < c){
            System.out.print("중간 값은 " + a);
        }
        else{
            System.out.print("중간 값은 " + c);
        }
        scanner.close();
    }
}
