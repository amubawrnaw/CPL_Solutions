import java.util.*;
import java.math.BigInteger;
public class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);

		while(sc.hasNextInt()){
			int n = sc.nextInt();
			BigInteger ans = new BigInteger("1");
			for(int i = 2 ; i <= n ; i++){
				ans.add(new BigInteger((i*i*i)+""));
			}
			System.out.println(ans.toString());
		}
	}
		
}