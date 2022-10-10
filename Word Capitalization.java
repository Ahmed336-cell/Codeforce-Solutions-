import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
       String s1 ;
       Scanner input =  new Scanner(System.in);

       s1 = input.next();
      char [] ch = s1.toCharArray();
      ch[0] = Character.toUpperCase(ch[0]);

      for (int i = 0 ; i < ch.length ; i++){
          System.out.print(ch[i]);
      }
    }
}
