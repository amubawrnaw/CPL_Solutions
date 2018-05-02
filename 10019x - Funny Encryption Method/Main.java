import java.util.*;

public class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int cnt = sc.nextInt(), inp;
		while(cnt-->0){
			inp = sc.nextInt();
			System.out.println(Integer.parseInt(inp+"",2));
			System.out.println(Integer.parseInt(inp+"",16));

		}
		
	}
}
