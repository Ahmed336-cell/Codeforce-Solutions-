import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int lower = 0, upper = 0;
        String word = input.next();
        char[] w = word.toCharArray();

        //using ASCII codes to compare between the letters
        // you can refer the table from here https://www.ascii-code.com/
        for (int i = 0; i < word.length(); i++) {
            if (w[i] >= 65 && w[i] <= 90) {
                upper++;
            } else if (w[i] >= 97 && w[i] <= 122) {
                lower++;
            }
        }

        if (upper > lower) {
            System.out.println(word.toUpperCase());
        } else {
            System.out.println(word.toLowerCase());
        }
    }

}
