import java.util.*;

public class Main{
public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        HashMap<Character, Integer> map = new HashMap<>();
        int val = 2;
        for(int i = 'A', j = 0 ; i <= 'O' ; i++, j++){
            if(j%3==0 && j!=0) val++;
            map.put(new Character((char) i), val);
            
        }
        map.put(new Character('P'), 7);
        map.put(new Character('Q'), 7);
        map.put(new Character('R'), 7);
        map.put(new Character('S'), 7);
        
        map.put(new Character('T'), 8);
        map.put(new Character('U'), 8);
        map.put(new Character('V'), 8);
        
        map.put(new Character('W'), 9);
        map.put(new Character('X'), 9);
        map.put(new Character('Y'), 9);
        map.put(new Character('Z'), 9);
        
        while(sc.hasNextLine()){
            StringBuilder sb = new StringBuilder();
            char[] input = sc.nextLine().toCharArray();
            for(int i = 0 ; i < input.length ; i++){
                if((input[i]+"").matches("[A-Z]"))
                    sb.append(map.get(input[i]));
                else sb.append(input[i]);
            }
            System.out.println(sb.toString());
        }
        
    }
}