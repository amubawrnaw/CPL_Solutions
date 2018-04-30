import java.util.*;

public class Main{
	public static int f91(int n){
		if(n<=100) return f91(f91(n+11));
		else return n-10;
	}
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int inp = sc.nextInt();
		while(inp!=0){
			System.out.println("f91(" + inp + ") = " + f91(inp));
			inp = sc.nextInt();
		}
	}
}
