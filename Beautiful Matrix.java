import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
      int t =0;
      int x ;
      Scanner input = new Scanner(System.in);
      for (int i =0 ; i <5 ; i++){
          for (int  j= 0 ; j<5 ; j++){
              x = input.nextInt();
              if (x == 1){
                  t+= Math.abs(i-2);
                  t+= Math.abs(j-2);
              }
          }
      }

        System.out.println(t);

    }

}
