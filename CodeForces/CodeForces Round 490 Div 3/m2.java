import java.util.*;

public class m2{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int tc = sc.nextInt();
		String s = sc.next();
		StringBuilder sb;
		for(int i = 2 ; i<tc-1 ; i++){
			if(tc%i==0){
				String end = s.substring(i); 
				String rev = s.substring(0,i);
				s = new StringBuilder(rev).reverse().toString() + end;
			}
		}
		s = new StringBuilder(s).reverse().toString();
		System.out.println(s);
	}
}
