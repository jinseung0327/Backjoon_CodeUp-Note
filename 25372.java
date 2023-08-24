import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        String password;
        Scanner scanner = new Scanner(System.in);
        int intValue = scanner.nextInt();;

        for(int i = 1; i <= intValue; i++)
        {
            password = scanner.next();

            if(password.length() >= 6 && password.length() <= 9)
            {
                System.out.println("yes");
            }
            else System.out.println("no");
        }
    }
}
