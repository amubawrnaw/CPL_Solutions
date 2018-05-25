import java.util.Scanner;
public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int tc = sc.nextInt(), tc2, max, temp;
        for(int i = 1 ; i <= tc ; i++ ){
            tc2 = sc.nextInt();
            max = -1;
            while(tc2-->0){
                temp = sc.nextInt();
                if(temp>max) max = temp;
            }
            System.out.println("Case " + i + ": " + max);
        }
    }
}