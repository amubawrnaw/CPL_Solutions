import java.util.Scanner;
import java.util.Arrays;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int input, cX, cY, iX, iY;
        while(true){
            input = sc.nextInt();
            if(input == 0) break;
            cX = sc.nextInt();
            cY = sc.nextInt();
            while(input-->0){
                iX = sc.nextInt();
                iY = sc.nextInt();
                
                if(iX>cX){
                    if(iY == cY) System.out.println("divisa");
                    else if(iY>cY) System.out.println("NE");
                    else System.out.println("SE");
                }else if(iX<cX){
                    if(iY == cY) System.out.println("divisa");
                    else if(iY>cY) System.out.println("NO");
                    else System.out.println("SO");
                }else{
                    System.out.println("divisa");
                }
            }
        }
    }
}