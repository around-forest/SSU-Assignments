import java.util.Scanner;
public class assignment2_8 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.print("정수 몇 개? >> ");
        int n = scanner.nextInt();
        int number[] = new int[n];

        for(int i = 0; i < n; i++){
            int random = (int)(Math.random()*100+1);
            number[i] = random;
        }
        int a = 0;
        while(a == 0) {
            for (int i = 0; i < n; i++) {
                for (int j = 1 + i; j < n; j++) {
                    if (number[i] == number[j]) {
                        number[j] = (int) (Math.random() * 100 + 1);
                        a++;
                    }
                }
            }
            if(a == 0){
                break;
            }
            else{
                a = 0;
            }
        }
        for(int i = 0; i<n; i++){
            System.out.print(number[i]+" ");
        }
    }
}
