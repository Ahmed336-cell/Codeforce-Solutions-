import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
    int k , n ,w ;
    Scanner input  = new Scanner(System.in);
    k = input.nextInt();
    n = input.nextInt();
    w = input.nextInt();

    int sum = k;
    for (int  i = 2 ; i <=w ; i++){
        sum += i*k;
    }
    if (sum<=n){
        System.out.println("0");
    }else{
        System.out.println(sum-n);
    }



    }
}
