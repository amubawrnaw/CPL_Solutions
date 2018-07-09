import java.util.*;

public class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int len = sc.nextInt();
		int max = sc.nextInt();
		int cnt = 0;
		ArrayList<Integer> list = new ArrayList<>();
		for(int i = 0 ; i < len ; i++){
			list.add(sc.nextInt());
		}
		while(true){
			if(!list.isEmpty() && max >= list.get(0) ){
				list.remove(0);
				cnt++;
			}else{
				break;
			}
		}
		if(!list.isEmpty()){
			for(int i = list.size()-1 ;; i = list.size()-1){
				if(!list.isEmpty() && max >= list.get(i)){
					list.remove(i);
					cnt++;
				}else{
					break;
				}
			}
		}
		System.out.println(cnt);
	}
}
