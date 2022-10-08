import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
       String s1 , s2 ;
       Scanner input =  new Scanner(System.in);
       s1 = input.next();
       s2 = input.next();
       s1 = s1.toLowerCase();
       s2 = s2.toLowerCase();

       if (s1.compareTo(s2) == 0){
           System.out.println("0");
       }else if (s1.compareTo(s2)>0){
           System.out.println("1");
       }else if (s1.compareTo(s2)<0){
           System.out.println("-1");
       }
    }
}
