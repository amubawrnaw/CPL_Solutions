import java.util.*;

public class M1{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int cnt = sc.nextInt();
		int ans = 0;
		int prev = 1;
		int curr = 1;
		String prnt = "";
		for(int i = 0 ; i < cnt ; i++){
			if(i == 0){
				prev = sc.nextInt();
			}else{
				curr = sc.nextInt();
				if(curr == 1){
					ans++;
					prnt+= prev + " ";
				}
				prev = curr;
			}
		}
		ans++;
		prnt+=curr;
		System.out.println(ans+"\n"+prnt);
		
	}
}
