import java.util.*;

public class Main{
	public static class pal{
		int cnt;
		long pal;
		public pal(long p){
			cnt = 0;
			pal = p;
		}

		public boolean isPalindrome(){
			//stole this code haha
			long reverse = 0;
			String[] str = (pal+"").split("");
			for(int i = str.length-1 ; i >= 0 ; i--){
				reverse*=10;
				reverse+=Long.parseLong(str[i]);
			}
			return (reverse == pal);
		}
	}

	public static pal palindrome(pal p){
		long reverse = 0;
		String[] str;
		if(p.isPalindrome() && p.cnt!=0){
			return p;
		}else{
			p.cnt++;
			str = (p.pal+"").split("");
			for(int i = str.length-1 ; i >= 0 ; i--){
				reverse*=10;
				reverse+= Long.parseLong(str[i]);
			}
			p.pal += reverse;
			return palindrome(p);
		}
	}

	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int cnt = sc.nextInt();
		long inp;
		while(cnt-->0){
			inp = sc.nextLong();
			pal p = palindrome(new pal(inp));

			System.out.println(p.cnt + " " + p.pal);
		}
	}
}
