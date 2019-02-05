import java.util.*;

public class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int cnt = sc.nextInt();
		while(cnt-->0){
			int xd = sc.nextInt();
			int max = 0;
			while(xd>0){
				int temp = 0 ;
				String s = Integer.toBinaryString(xd);
				for(int i = 0 ; i < s.length() ; i++){
					if(s.charAt(i) == '1') temp++;
				}
				if(temp>max) max = temp;
				xd/=10;
			}
			System.out.println(max);
		}
	}
}
