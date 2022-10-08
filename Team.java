import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
      	int n  , petya , vasya , tonya  , knowm=0;
        Scanner input= new Scanner(System.in);
        n = input.nextInt();
        for (int  i =0 ; i < n ; i++){
            petya = input.nextInt();
            vasya = input.nextInt();
            tonya = input.nextInt();
            int add = petya + vasya + tonya;
            if (add > 1){
                knowm++;
            }


        }
        System.out.print(knowm);
    }
}
