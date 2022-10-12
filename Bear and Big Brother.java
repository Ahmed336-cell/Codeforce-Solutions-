import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        int w1 ,w2 , n=0;
        Scanner input = new Scanner(System.in);
        w1 = input.nextInt();
        w2 = input.nextInt();

        while (w1<=w2){
            w1 = w1*3;
            w2 = w2 * 2;
            n++;

        }

        System.out.print(n);

    }
}
