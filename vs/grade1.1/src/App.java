import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        
        Scanner input = new Scanner(System.in);
        int number = input.nextInt();

        if(number >= 80){
            System.out.println("A+");
        }
        else if (number >= 70){
            System.out.println("B");
        }
        else{
            System.out.println("F");
        }
    }
}
