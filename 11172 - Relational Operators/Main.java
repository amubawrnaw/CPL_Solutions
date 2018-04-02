import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int v1,v2, cnt = sc.nextInt();

        while(cnt-->0){
            v1 = sc.nextInt();
            v2 = sc.nextInt();
            if(v1>v2){
                System.out.println(">");
            }else if(v2>v1){
                System.out.println("<");
            }else{
                System.out.println("=");
            }
        }
    }
}