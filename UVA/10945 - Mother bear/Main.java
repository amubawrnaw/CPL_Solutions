import java.util.*;

public class Main{
    
    public static void main(String[] args){
        int x = 1;
        Scanner sc = new Scanner(System.in);
        String inp = sc.nextLine();
        
        while(inp.compareToIgnoreCase("DONE") != 0){
            inp = inp.replaceAll("[.,!? ]", "");
            inp = inp.toLowerCase();
            
            StringBuilder sb = new StringBuilder(inp);
            sb.reverse();
            
            System.out.println(inp.equals(sb.toString())?"You won't be eaten!":"Uh oh..");
            inp = sc.nextLine();
        }
    }
}