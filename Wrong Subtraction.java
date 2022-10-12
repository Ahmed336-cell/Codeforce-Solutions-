import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
     int n1 , n2,r=0;
     Scanner input= new Scanner(System.in);
     n1 = input.nextInt();
     n2 = input.nextInt();
     for (int  i =1 ; i<=n2 ; i++){
         r = n1%10;
         if (r ==0){
             n1/=10;
         }else{
             n1-=1;
         }
     }
        System.out.print(n1);
    }
}
