public class assignment2_10 {
    public static void main(String[] args){
        int[][] array = new int[4][4];

        int a = 0, m, n;
        while(a < 10) {
            m = (int)(Math.random()*4);
            n = (int)(Math.random()*4);

            if(array[m][n] == 0){
                array[m][n] = (int)(Math.random()*10+1);
                a++;
            }
        }
        for(int i = 0; i<4; i++){
            for(int j = 0; j<4; j++){
                System.out.print(array[i][j]+" ");
            }
            System.out.println();
        }
    }
}
