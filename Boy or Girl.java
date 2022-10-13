import java.util.Arrays;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
   String name;
   int counter=1;
    Scanner input  = new Scanner(System.in);
    name = input.next();
    char [] ar = name.toCharArray();
    Arrays.sort(ar);
    for (int i = 1 ; i <ar.length ; i++){
        if (ar[i-1] != ar[i]){
            ++counter;
        }

    }

        if (counter %2 ==0){
            System.out.println("CHAT WITH HER!");
        }else{
            System.out.println("IGNORE HIM!");
        }





    }
}
