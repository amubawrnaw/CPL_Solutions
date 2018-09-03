import java.util.*;

public class Main{
     public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        
        int tc = sc.nextInt();
        for(int i = 1 ; i <= tc ; i++){
            int sum = 0;
            int s = sc.nextInt();
            int l = sc.nextInt();
            for(; s <= l ; s++){
                if(s%2!=0) sum+=s;
            }
            System.out.println("Case " + i + ": " + sum);
        }
     }
}