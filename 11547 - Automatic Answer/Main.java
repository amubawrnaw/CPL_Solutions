import java.util.*;

public class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int cnt = sc.nextInt(), ans;
		String[] split;
		while(cnt-->0){
			ans = sc.nextInt();
			ans = (((((ans*567)/9)+7492)*235)/47)-498;
			split = (ans+"").split("");
			System.out.println(split[split.length-2]);
		}
	}
}
