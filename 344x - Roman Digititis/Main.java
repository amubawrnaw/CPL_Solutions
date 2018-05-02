import java.util.*;

public class Main{
	public static int[] toRoman(int n){
		int[] res = new int[5];
		



	}

	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int inp = sc.nextInt();
		int[][] lookup = new int[100][5];
		for(int i = 0 ; i < 100 ; i++){
			lookup[i] = toRoman(i+1);
		}
		while(inp!=0){


			
			inp = sc.nextInt();
		}
	}
}
