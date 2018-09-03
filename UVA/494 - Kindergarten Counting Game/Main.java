import java.util.*;

public class Main{
public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        while(sc.hasNextLine()){
            int cnt = 0;
            String[] in = sc.nextLine().split("[^a-zA-Z]");
            for(int i = 0 ; i < in.length ; i++){
                if(in[i].matches(".*[a-zA-Z].*")) cnt++;
            }
            System.out.println(cnt);
        }
    }
}