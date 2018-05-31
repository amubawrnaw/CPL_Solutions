import java.util.*;

public class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		long in = sc.nextLong();
		if(in==0){
			System.out.println(0);
		}else{
			in++;
			if(in%2==0)in/=2;
			System.out.println(in);
		}
	}
}