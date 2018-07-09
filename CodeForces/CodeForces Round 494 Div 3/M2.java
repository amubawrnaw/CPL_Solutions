import java.util.*;

public class M2{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		int x = sc.nextInt();
		ArrayList<Integer> ans = new ArrayList<>();
		ans.add(0);
		ans.add(1);
		a--;
		b--;
		x--;
		int ab = a+b;
		int latest = 1;
		while(ab-->0){
			if(x!=0){
				x--;
				if(latest == 1){
					latest = 0;
					b--;
				}else{
					latest = 1;
					a--;
				}
				ans.add(latest);
			}else{
				if(a>0){
					ans.add(ans.indexOf(0),0);
					a--;
				}else{
					ans.add(ans.indexOf(1),1);
					b--;
				}
			}
		}
		String fin = "";
		for(int i = 0 ; i < ans.size(); i++){
			fin+=ans.get(i);
		}
		System.out.println(fin);
	}
}
