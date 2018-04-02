import java.util.Scanner;
import java.util.Arrays;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int cnt = sc.nextInt();
        int[] inp = new int[3];
        for(int i = 1 ; i <= cnt ; i++){
            inp[0] = sc.nextInt();
            inp[1] = sc.nextInt();
            inp[2] = sc.nextInt();
            Arrays.sort(inp);
            System.out.println("Case " + i + ": " + inp[1]);
        }
    }
}