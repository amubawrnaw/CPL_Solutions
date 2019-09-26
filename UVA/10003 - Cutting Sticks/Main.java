import java.util.*;

public class Main{
	static int[][] memo;
	static int[] cut;
	public static int recurse(int a, int b){
		if(b-a == 1) return 0;

		if(memo[a][b]!=-1) return memo[a][b];

		int min = Integer.MAX_VALUE;

		for(int i = a+1 ; i < b ; i++ ){
			min = Math.min(cut[b]-cut[a] + recurse(a, i) + recurse(i,b), min);
		}
		memo[a][b] = min;
		return min;
	}
	public static void cut (int l, int cuts, int[] places) {
		//your print statements here
		memo = new int[52][52];
		for(int i = 0 ; i < 52 ; i++){
			for(int k = 0 ; k < 52 ; k++){
				memo[i][k] = -1;
			}
		}
		cut = new int[52];
		cut[0] = 0;
		for(int i = 1 ; i <= cuts ; i++){
			cut[i] = places[i-1];
		}
		cut[cuts+1] = l;

		System.out.println("The minimum cutting is " + recurse(0, cuts+1) + ".");
	}

	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int slen = sc.nextInt();
		int clen;
		while(slen!=0){
			clen = sc.nextInt();
			int[] cuts = new int[clen];
			for(int i = 0 ; i < clen ; i++){
				cuts[i] = sc.nextInt();
			}
			cut(slen, clen, cuts);
			slen = sc.nextInt();
		}
	}
}
