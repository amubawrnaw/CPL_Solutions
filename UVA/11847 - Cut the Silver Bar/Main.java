import java.util.*;

public class Main{
	public static void main(String[] args){
		//better solution for this is using logarithms
		Scanner sc = new Scanner(System.in);
		int in = sc.nextInt();
		int ans,len;
		while(in!=0){
			ans = 0;
			len = 1;
			while(len<in){
				len=(len*2)+1;
				ans++;
			}
			System.out.println(ans);
			in = sc.nextInt();
		}
	}
}