import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        double n  , m , a  ;
        Scanner input = new Scanner(System.in);
        n = input.nextDouble();
        m = input.nextDouble();
        a= input.nextDouble();
      long total = (long)(Math.ceil(n/a) *Math.ceil(m/a));
        System.out.println(total);
    }
}
