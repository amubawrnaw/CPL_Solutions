import java.util.*;
import java.math.BigInteger;

public class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		
		while(sc.hasNext()) {
			BigInteger n = new BigInteger(sc.next());
			if(n.signum() == -1) break;
			//stolened formula
			n = n.multiply(n.add(BigInteger.ONE));
			n = n.divide(new BigInteger("2"));
			n = n.add(BigInteger.ONE);
			System.out.println(n.toString());
		}
	}
}
