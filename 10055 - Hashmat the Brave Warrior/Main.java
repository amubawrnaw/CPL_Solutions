import java.util.Scanner;


public class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		long i1, i2, a;
		while(sc.hasNextLong()){
			i1 = sc.nextLong();
			i2 = sc.nextLong();

			a = i1-i2;
			if(a<0) a*=-1;
			System.out.println(a);
		}
	}
}