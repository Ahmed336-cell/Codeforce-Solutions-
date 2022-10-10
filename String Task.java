import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
       String s1 ;
       Scanner input =  new Scanner(System.in);

       s1 = input.next();
       s1 = s1.toLowerCase();
      s1 = s1.replaceAll("[aeiouy]","");
      StringBuilder builder = new StringBuilder(s1);
      for (int i = 0 ; i < builder.length() ; i+=2){
          builder.insert(i,'.');
      }

        System.out.print(builder);
    }
}
