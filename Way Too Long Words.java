import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
	int n ;
        String s;
        Scanner input= new Scanner(System.in);
        n = input.nextInt();
        for (int i = 0 ; i <=n ; i++){
            s = input.nextLine();
            if (s.length() > 10){
                System.out.print(s.charAt(0));
                System.out.print(s.length()-2);
                System.out.println(s.charAt(s.length()-1));
            }else {
                System.out.println(s);
            }
        }

    }
}
