import java.util.*;

public class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		

		int cnt = sc.nextInt();
		StringBuilder sb = new StringBuilder(sc.next());
		int ans = 0;
		
		while(sb.indexOf("xxx")!=-1){
			sb.deleteCharAt(sb.indexOf("xxx"));
			ans++;
		}
		System.out.println(ans);
	}
}
