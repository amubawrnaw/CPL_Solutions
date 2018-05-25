import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int x = 1;
        String inp = sc.next();
        while(inp.compareToIgnoreCase("*") != 0){
            System.out.println("Case " + x + ": Hajj-e-" + (inp.compareToIgnoreCase("Hajj")==0 ? "Akbar" : "Asghar"));
            x++;
            inp = sc.next();
        }
    }
}