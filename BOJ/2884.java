import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        //input
        Scanner scanner = new Scanner(System.in);
        
        int H;
        int M;

        H = scanner.nextInt();
        M = scanner.nextInt();

        if( (M - 45) < 0) {
            if( H == 0)
                H = 23;
            else
                H = H - 1;
            M = M - 45 + 60;
        }
        else
            M = M - 45;

        System.out.print(H+" "+M);
    }
}