import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
	int weight;
        Scanner input= new Scanner(System.in);

        weight = input.nextInt();
        if (weight%2 ==0 && weight > 2){
            System.out.println("YES");
        }else{
            System.out.println("NO");
        }
    }
}
