import java.util.*;

public class Main{
public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        boolean b = true;
        while(sc.hasNextLine()){
            char[] in = sc.nextLine().toCharArray();
            StringBuilder sb = new StringBuilder();
            for(int i = 0 ; i < in.length ; i++){
                if(in[i] == '\"'){
                    if(b) sb.append("``");
                    else sb.append("''");
                    b=!b;
                }else{
                    sb.append(in[i]);
                }
            }
            System.out.println(sb.toString());
        }
    }
}