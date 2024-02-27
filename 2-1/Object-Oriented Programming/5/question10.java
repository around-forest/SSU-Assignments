import java.util.Scanner;
public class question10 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("첫번째 원의 중심과 반지름 입력>>");
        double x1, y1, r1, x2, y2, r2, distance;
        x1 = scanner.nextDouble();
        y1 = scanner.nextDouble();
        r1 = scanner.nextDouble();

        System.out.print("두번째 원의 중심과 반지름 입력>>");
        x2 = scanner.nextDouble();
        y2 = scanner.nextDouble();
        r2 = scanner.nextDouble();

        //중심에서 중심까지의 거리가 r1 + r2 보다 길면 겹치지 않는다.
        distance = Math.sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));

        if(distance <= (r1 + r2)){
            System.out.print("두 원은 서로 겹친다");
        }
        else{
            System.out.print("두 원은 서로 겹치지 않는다.");
        }
        scanner.close();
    }
}
