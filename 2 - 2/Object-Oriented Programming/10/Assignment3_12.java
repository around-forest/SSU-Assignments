import java.util.Scanner;
class Concert{
    private String S[];
    private String A[];
    private String B[];
    private Scanner sc;
    private String name;
    private int numb;

    Concert(){
        sc = new Scanner(System.in);
        S = new String[10];
        A = new String[10];
        B = new String[10];
        for(int i = 0; i<S.length; i++){
            S[i] = "___";
            A[i] = "___";
            B[i] = "___";
        }
    }

    public void Reservation(){
        int n;
        System.out.print("좌석구분 S(1), A(2), B(3)>>");
        n = sc.nextInt();
        switch (n){
            case 1:
                System.out.print("S>>");
                for(int i = 0; i<10; i++){
                    System.out.print(S[i]+" ");
                }
                System.out.println("");
                System.out.print("이름>>");
                name = sc.next();
                System.out.print("번호>>");
                numb = sc.nextInt();
                S[numb - 1] = name;
                break;
            case 2:
                System.out.print("A>>");
                for(int i = 0; i<10; i++){
                    System.out.print(A[i]+" ");
                }
                System.out.println("");
                System.out.print("이름>>");
                name = sc.next();
                System.out.print("번호>>");
                numb = sc.nextInt();
                A[numb - 1] = name;
                break;
            case 3:
                System.out.print("B>>");
                for(int i = 0; i<10; i++){
                    System.out.print(B[i]+" ");
                }
                System.out.println("");
                System.out.print("이름>>");
                name = sc.next();
                System.out.print("번호>>");
                numb = sc.nextInt();
                B[numb - 1] = name;
                break;
        }
    }

    public void Check(){
        System.out.print("S>>");
        for(int i = 0; i<10; i++){
            System.out.print(S[i]+" ");
        }
        System.out.println("");
        System.out.print("A>>");
        for(int i = 0; i<10; i++){
            System.out.print(A[i]+" ");
        }
        System.out.println("");
        System.out.print("B>>");
        for(int i = 0; i<10; i++){
            System.out.print(B[i]+" ");
        }
        System.out.println("");
        System.out.println("<<<조회를 완료하였습니다.>>>");
    }

    public void Cancelation(){
        int n;
        System.out.print("좌석구분 S(1), A(2), B(3)>>");
        n = sc.nextInt();
        switch (n) {
            case 1:
                System.out.print("S>>");
                for(int i = 0; i<10; i++){
                    System.out.print(S[i]+" ");
                }
                System.out.println("");
                System.out.print("이름>>");
                this.name = sc.next();
                for (int i = 0; i < 10; i++) {
                    if (name.equals(S[i])) {
                        S[i] = "___";
                        break;
                    }
                }
                break;
            case 2:
                System.out.print("A>>");
                for(int i = 0; i<10; i++){
                    System.out.print(A[i]+" ");
                }
                System.out.println("");
                System.out.print("이름>>");
                this.name = sc.next();
                for (int i = 0; i < 10; i++) {
                    if (name.equals(A[i])) {
                        A[i] = "___";
                        break;
                    }
                }
                break;
            case 3:
                System.out.print("B>>");
                for(int i = 0; i<10; i++){
                    System.out.print(B[i]+" ");
                }
                System.out.println("");
                System.out.print("이름>>");
                this.name = sc.next();
                for (int i = 0; i < 10; i++) {
                    if (name.equals(B[i])) {
                        B[i] = "___";
                        break;
                    }
                }
                break;
        }
    }
}

public class Assignment3_12 {
        public static void main(String[] args){
            Scanner sc = new Scanner(System.in);
            Concert concert = new Concert();
            int numb, i = 1;

            System.out.println("명품콘서트홀 예약 시스템입니다.");
            while(true) {
                System.out.print("예약:1, 조회:2, 취소:3, 끝내기:4 >>");
                numb = sc.nextInt();

                switch (numb) {
                    case 1:
                        concert.Reservation();
                        break;
                    case 2:
                        concert.Check();
                        break;
                    case 3:
                        concert.Cancelation();
                        break;
                    case 4:
                        i = 0;
                        break;
                }
                if(i == 0){
                    break;
                }
            }
        }
}

