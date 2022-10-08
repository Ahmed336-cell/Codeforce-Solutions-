import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        int n , k , i , q =0 ,s = 0;
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        k = input.nextInt();
        int[] arr  = new int[n+1];

        for (int j = 1 ; j <=n ; j++ ){
            i = input.nextInt();
            arr[j] = i;
            if ( j==k){
                s = i;
            }
        }

        for (int w = 1 ; w <=n  ;w++){
            if (arr[w] >= s && arr[w]>0){
                q++;
            }
        }


        System.out.println(q);
    }
}
