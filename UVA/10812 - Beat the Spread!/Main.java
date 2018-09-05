import java.util.*;
public class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int cnt = sc.nextInt();
		while(cnt-->0){
			int ain = sc.nextInt();
			int bin = sc.nextInt();

			int a = ain;
			int b = bin;

			//Thank you ADVDISC :)
			b = b - a;
			b = b/2;
			a = b+a;
			if(b<0) b*=-1;
			if(a + b == ain && Math.abs(a-b) == bin)
				System.out.println(a + " " + b);
			else
				System.out.println("impossible");
		}
	}
}
