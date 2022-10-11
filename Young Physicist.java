import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        int t;
        Scanner input = new Scanner(System.in);
        t = input.nextInt();
        int [][] match  = new int[t][3];
        int []sum = new int[3];
        for (int i =0 ; i < t ; i++){
            for (int j = 0 ; j < 3 ; j++){
                match[i][j] = input.nextInt();
                sum[j] += match[i][j];
            }
        }

        if (sum[0] ==0 && sum[1]==0 && sum[2] ==0 ){
            System.out.println("YES");
        }else{
            System.out.println("NO");
        }
    }
}
