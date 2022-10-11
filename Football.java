import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
    String s ;
    Scanner input = new Scanner(System.in);
    s = input.next();
    if (s.contains("1111111")|| s.contains("0000000")){
        System.out.println("YES");
    }else{
        System.out.println("NO");
    }
    }
}
