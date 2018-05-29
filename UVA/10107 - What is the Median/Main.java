import java.util.*;
import java.math.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int input = 0;
        ArrayList<Integer> al = new ArrayList<>();
        
        while(sc.hasNextInt()){
            al.add(sc.nextInt());
            al.sort(null);
            if(al.size()%2!=0){
                System.out.println(al.get(al.size()/2));
            }else{
                System.out.println((al.get(al.size()/2) + al.get((al.size()/2)-1))/2);
            }
        }
    }
}