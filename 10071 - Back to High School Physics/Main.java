import java.util.*;

public class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int in1, in2;
		while(sc.hasNextInt()){
			in1 = sc.nextInt();
			in2 = sc.nextInt();
			System.out.println(in1*in2*2);
		}
	}
}
