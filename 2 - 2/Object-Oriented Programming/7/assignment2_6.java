import java.util.Scanner;
public class assignment2_6 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int[] unit = {50000, 10000, 1000, 500, 100, 50, 10, 1};

        System.out.print("금액을 입력하시오 >> ");
        int amount = scanner.nextInt();

        for(int i = 0; i < 8; i++){
            int j = amount/unit[i];
            System.out.println(unit[i]+" 원 짜리 : "+j+"개");
            amount = amount % unit[i];
        }
    }
}
