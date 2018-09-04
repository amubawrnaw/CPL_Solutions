import java.util.*;

public class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);

		int cnt = sc.nextInt();
		sc.nextLine();

		HashMap<String, Integer> map = new HashMap<>();
		while(cnt-->0){
			String in = sc.nextLine().split(" ")[0];
			if(map.containsKey(in)){
				map.put(in, map.get(in)+1);
			}else{
				map.put(in,1);
			}
		}
		String[] temp = new String[map.size()];
		int i = 0;
		for(Map.Entry<String, Integer> entry : map.entrySet()){
			temp[i] = entry.getKey();
			i++;
		}
		StringBuilder sb = new StringBuilder();
		Arrays.sort(temp);
		for(String s : temp){
			sb.append(s + " " + map.get(s));
			sb.append("\n");
		}
		System.out.print(sb.toString());
	}
}
