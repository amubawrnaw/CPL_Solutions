import java.util.*;

public class Main{
	public static int rec(String[] s){
		int x = 0;
		if(s.length == 1){
			return Integer.parseInt(s[0]);
		}else{
			for(int i = 0 ; i < s.length ; i++){
				x+=Integer.parseInt(s[i]);
			}
			return rec((x+"").split(""));
		}
	}
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int notzero = sc.nextInt();
		while(notzero!= 0){
			System.out.println(rec((notzero+"").split("")));
			notzero = sc.nextInt();
		}
	}
}
