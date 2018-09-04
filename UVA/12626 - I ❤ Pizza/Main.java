import java.util.*;

public class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);

		int cnt = sc.nextInt();
		sc.nextLine();
		HashMap<Character, Integer> map = new HashMap<>();

		while(cnt-->0){
			map.put(new Character('M'),0);
			map.put(new Character('A'),0);
			map.put(new Character('R'),0);
			map.put(new Character('G'),0);
			map.put(new Character('T'),0);
			map.put(new Character('I'),0);

			char[] in = sc.nextLine().toCharArray();

			for(int i = 0 ; i < in.length ; i++){
				if(map.containsKey(new Character(in[i]))){
					map.put(in[i], map.get(in[i])+1);
				}
			}
			map.put('A', map.get('A')/3);
			map.put('R', map.get('R')/2);

			int min = 999999;
			for(Map.Entry<Character, Integer> entry : map.entrySet()){
				int temp=entry.getValue();
				if (temp < min) min = temp;
			}
			System.out.println(min);
		}
		
	}
}
