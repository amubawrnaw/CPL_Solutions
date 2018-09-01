import java.util.*;

public class Main{
	public static void reset(HashMap<Character, Integer> h){
		for(int i = 65 ; i < 91 ; i++){
			h.put((char)i, 0);
		}
		for(int i = 97 ; i < 123 ; i++){
			h.put((char)i, 0);
		}
	}
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		HashMap<Character, Integer> map = new HashMap<>();
		
		while(sc.hasNextLine()){
			Main.reset(map);
			int max = 1;
			char[] in = sc.nextLine().toCharArray();
			for(int i = 0 ; i < in.length ; i++){
				Character c = new Character(in[i]);
				if(map.containsKey(c)){
					int temp = map.get(c) + 1;
					map.put(c, temp);
					if(max < temp)
						max = temp;
				}
			}

			StringBuilder sb = new StringBuilder();

			for(Map.Entry<Character, Integer> entry : map.entrySet()){
				if(entry.getValue() == max){
					sb.append(entry.getKey());
				}
			}
			sb.append(" " + max);
			System.out.println(sb.toString());
		}
	}
}
