import java.util.Scanner;
public class assignment2_16 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        String str[] = {"가위", "바위", "보"};

        System.out.println("컴퓨터와 가위 바위 보 게임을 합니다.");
        while(true){
            System.out.print("가위 바위 보! >> ");
            String player = scanner.next();

            if(player.equals("그만")){
                System.out.println("게임을 종료합니다...");
                break;
            }

            int n = (int)(Math.random()*3);
            String computer = str[n];
            System.out.print("사용자 = "+player+", 컴퓨터 = "+computer);

            if(player.equals("가위") && computer.equals("가위")){
                System.out.println(" 비겼습니다.");
            }
            else if(player.equals("가위") && computer.equals("바위")){
                System.out.println(" 사용자가 졌습니다.");
            }
            else if(player.equals("가위") && computer.equals("보")){
                System.out.println(" 사용자가 이겼습니다.");
            }

            else if(player.equals("바위") && computer.equals("바위")){
                System.out.println(" 비겼습니다.");
            }
            else if(player.equals("바위") && computer.equals("가위")){
                System.out.println(" 사용자가 이겼습니다.");
            }
            else if(player.equals("바위") && computer.equals("보")){
                System.out.println(" 사용자가 졌습니다.");
            }

            else if(player.equals("보") && computer.equals("보")){
                System.out.println(" 비겼습니다.");
            }
            else if(player.equals("보") && computer.equals("가위")){
                System.out.println(" 사용자가 졌습니다.");
            }
            else if(player.equals("보") && computer.equals("바위")){
                System.out.println(" 사용자가 이겼습니다.");
            }
        }
    }
}
