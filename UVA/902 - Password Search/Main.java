import java.util.*;

public class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		while(sc.hasNextInt()){
			int size = sc.nextInt();
			String inp = sc.next();
			HashMap<String, Integer> map = new HashMap<>();
			char[] charArr = new char[inp.length()];

			for(int i = 0 ; i < inp.length() ; i++){
				charArr[i] = inp.charAt(i);
			}

			StringBuilder sb;
			String temp;
			for(int i = 0 ; i < charArr.length - size+1; i++){
				sb = new StringBuilder();
				for(int k = i ; k < i + size; k++){
					sb.append(charArr[k]);
				}
				temp = sb.toString();
				if(map.containsKey(temp)){
					map.put(temp, map.get(temp)+1);
				}else{
					map.put(temp, 1);
				}
			}
			int max = -99;
			String ans = "";
			for (Map.Entry<String, Integer> entry : map.entrySet()) {
			    String key = entry.getKey();
			    Integer value = entry.getValue();
			    if(value > max){
			    	max = value;
			    	ans = key;
			    }
			}
			System.out.println(ans);
		}
	}
}
