import java.util.*;
public class Main{

     public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        
        while(sc.hasNextInt()){
            int i1 = sc.nextInt();
            int i2 = sc.nextInt();
            System.out.println(i1*i2-1);
        }
     }
}