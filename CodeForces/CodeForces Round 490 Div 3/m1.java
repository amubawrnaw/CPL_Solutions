import java.util.*;

public class m1{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int tc = sc.nextInt();
		int k = sc.nextInt();
		char[] chars = new char[]{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
		String input = sc.next();
		char[] list = new char[tc];

		for(int i = 0 ; i < tc ; i++){
			list[i] = input.charAt(i);
		}
		int currChar = 0, currIndex = 0;

		int temp;
		boolean removed = false;
		while(k!=0){
			for(int i = 0 ; i < list.length; i++){
				if(k==0)break;
				if(list[i] == chars[currChar]){
					k--;
					list[i] = '!';
					i--;
					removed = true;
				} 
			}
			currChar++;
		}
		String ans = "";
		if(!removed || list.length==0){
			System.out.println();
		}else{
			for(int i = 0 ; i < list.length ; i++){
				if(list[i]!='!')ans+=list[i];
			}
			System.out.println(ans);
		}
		
	}
}