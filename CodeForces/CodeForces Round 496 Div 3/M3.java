import java.util.*;

public class M3{
	public static boolean IsPowerOfTwo(int number)
	{
	    return number > 0 && ((number & (number - 1)) == 0);
	}
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int cnt = sc.nextInt();
		int ans = 0;
		int[] inp = new int[cnt];
		boolean[][] lookup = new boolean[cnt][cnt];
		for(int i = 0 ; i < cnt ; i++){
			inp[i] = sc.nextInt();
		}
		for(int i = 0 ; i < cnt ; i++){
			for(int k = i + 1; k < cnt ; k++){
				lookup[i][k] = lookup[k][i]= M3.IsPowerOfTwo(inp[i] + inp[k]);
			}
		}
		System.out.println(ans);
	}
}
