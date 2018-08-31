import java.util.*;

public class M2{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		String in1 = sc.next();
		String in2 = sc.next();

		in1 = new StringBuilder(in1).reverse().toString();
		in2 = new StringBuilder(in2).reverse().toString();
		int ans = 0;
		int i;
		boolean broke = false;
		for(i = 0 ; i < in1.length() && i < in2.length() ; i++){
			if(in1.charAt(i) != in2.charAt(i)){
				ans = (in1.length() - i) + (in2.length() - i);
				broke = true;
				break;
			}
		}
		if(!broke && in1.length() > i){
			ans+= in1.length() - i;
		}else if(!broke && in2.length() > i){
			ans+= in2.length() - i;
		}
		System.out.println(ans);
	}
}
