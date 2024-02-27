import java.util.Scanner;
class Phone{
    private String name;
    private String tel;

    public Phone(String name, String tel){
        this.name = name;
        this.tel = tel;
    }
    public String getname(){
        return name;
    }
    public String gettel(){
        return tel;
    }
}

public class Assignment3_8 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int numb;
        String search;
        System.out.print("인원수 >> ");
        numb = sc.nextInt();
        Phone phones[] = new Phone[numb];

        for(int i = 0; i<phones.length; i++) {
            System.out.print("이름과 전화번호(이름과 번호는 빈 칸 없이 입력) >>> ");
            String name = sc.next();
            String tel = sc.next();
            phones[i] = new Phone(name, tel);
        }
        System.out.println("저장괴었습니다...");

        while(true){
            int i;
            System.out.print("검색할 이름 >> ");
            search = sc.next();

            if(search.equals("그만")){
                break;
            }

            for(i = 0; i<phones.length; i++){
                if(search.equals(phones[i].getname())){
                    System.out.println(phones[i].getname()+"의 번호는 "+phones[i].gettel()+" 입니다.");
                    break;
                }
            }
            if(i == phones.length) {
                System.out.println(search + "이 없습니다.");
            }
        }
    }
}
