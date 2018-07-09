import java.util.*;

public class M1{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int input = sc.nextInt();
		HashMap<Integer, Integer> cnt = new HashMap<>();
		for(int i = 0 ; i < input ; i++){
			int tmp = sc.nextInt();
			if(cnt.containsKey(tmp)){
				cnt.put(tmp, cnt.get(tmp) + 1);
			}else{
				cnt.put(tmp,1);
			}
		}
		int max = -99;
		for (int value : cnt.values()) {
		    if(value > max) max = value;
		}
		System.out.println(max);
	}
}
