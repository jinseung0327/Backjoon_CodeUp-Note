import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n, m, ch;
        int a, b;
        n = scanner.nextInt();
        m = scanner.nextInt();

        int[] arr = new int[n + 1];

        for(int k = 1; k <= n; k++) {
            arr[k] = k;
        }

        for(int i = 1; i <= m; i++) {
            a = scanner.nextInt();
            b = scanner.nextInt();

            ch = arr[a];
            arr[a] = arr[b];
            arr[b] = ch;
        }

        for(int j = 1; j <= n; j++) {
            System.out.print(arr[j] + " ");
        }
    }
}
