import java.util.*;

public class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		HashMap<Integer, Integer> map;
		while(sc.hasNextLine()){
			map = new HashMap<>();
			char[] cin = sc.nextLine().toCharArray();

			for(int i = 0 ; i < cin.length ; i++){
				if(map.containsKey((int)cin[i])){
					map.put((int)cin[i],map.get((int)cin[i])+1);
				}else{
					map.put((int)cin[i],1);
				}
			}
			StringBuilder sb = new StringBuilder();
			while(!map.isEmpty()){
				int min = 99999;
				int curr = -1;
				for(Map.Entry<Integer, Integer> entry : map.entrySet()){
					if(min>entry.getValue()){
						min = entry.getValue();
						curr = entry.getKey();
					}else if(min == entry.getValue() && curr < entry.getKey()){
						curr = entry.getKey();
					}
				}
				sb.append(curr + " " + min + "\n");
				map.remove(curr);
			}
			System.out.println(sb.toString());
		}
	}
}
