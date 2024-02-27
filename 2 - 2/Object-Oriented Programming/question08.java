import java.util.Scanner;
public class question08 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("점 (x1, y1), (x2, y2)의 좌표를 입력하시오>>");
        int x1, y1, x2, y2;
        x1 = scanner.nextInt();
        y1 = scanner.nextInt();
        x2 = scanner.nextInt();
        y2 = scanner.nextInt();

        if((100 <= x2 && x2 <= 200) && (100 <= y2 && y2 <= 200)){
            System.out.println("충돌합니다.");
        }
        else if((100 <= x2 && x2 <= 200) && (100 <= y1 && y1 <= 200)){
            System.out.println("충돌합니다.");
        }
        else if((100 <= x1 && x1 <= 200) && (100 <= y2 && y2 <= 200)){
            System.out.println("충돌합니다.");
        }
        else if((100 <= x1 && x1 <= 200) && (100 <= y1 && y1 <= 200)){
            System.out.println("충돌합니다.");
        }
        else{
            System.out.println("충돌하지 않습니다.");
        }
        scanner.close();
    }
}
