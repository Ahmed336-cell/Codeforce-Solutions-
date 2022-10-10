import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        int x , steps ;
        Scanner input = new Scanner(System.in);
        x = input.nextInt();
        steps = (x+4)/5;
        System.out.println(steps);
    }
}
