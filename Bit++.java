import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n , x=0 ;
        n = input.nextInt();
        String s1 = "X++";
        String s2 = "++X";

        String [] s = new String[n];

        for (int i=0 ; i < n ; i++){
          s[i]= input.next();
        }

        for (int i =0 ; i < n ; i++){
            if (s[i].equals(s1) || s[i].equals(s2)){
                x++;
            }else{
                x--;
            }
        }

        System.out.println(x);
    }

}
