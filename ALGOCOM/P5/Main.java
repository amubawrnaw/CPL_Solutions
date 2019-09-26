import java.util.*;
import java.io.*;
import java.lang.Math.*;


public class Main{
	static int cnum = 1;
    static int index;
	static StringBuilder sb = new StringBuilder();
	public static void printParenthesis(int i, int j, int n, int bracket[][], String[] letters)
	{
	    if (i == j)
	    {
	        sb.append(letters[index]);
	        index++;
	        return;
	    }
	    sb.append("(");
	    printParenthesis(i, bracket[i][j], n, bracket, letters);
        //sb.append(" x ");
	    printParenthesis(bracket[i][j]+1, j, n, bracket, letters);
	    sb.append(")");
	}
	public static void assignTable(String[] input){
        int n = Integer.parseInt(input[0]);
        ArrayList<Integer> pt = new ArrayList<Integer>();
        ArrayList<String> mname = new ArrayList<String>();

        for (int i = 1; i <= n; i++) {
            String[] split = input[i].split(" ");
            mname.add(split[0]);
            pt.add(Integer.parseInt(split[1]));
        }
        pt.add(Integer.parseInt(input[n].split(" ")[2]));
        fillTable(n+1, pt, mname);
    }
	public static void fillTable(int n, ArrayList<Integer> pt, ArrayList<String> mname){
        int m[][] = new int[n][n];
        int barr[][] = new int[n][n];

        Integer[] p = pt.toArray(new Integer[pt.size()]);
        String[] letters = mname.toArray(new String[mname.size()]);
        int i, j, k, L, q; 
        for(i = 1; i < n; i++) 
            m[i][i] = 0; 
        
        for (L=2; L<n ; L++) { 
            for (i=1; i<n-L+1; i++){ 
                j = i+L-1; 
                if(j == n) continue; 
                m[i][j] = Integer.MAX_VALUE; 
                for (k=i; k<=j-1; k++){ 
                    q = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j]; 
                    if (q < m[i][j]) {
                        m[i][j] = q; 
                    	barr[i][j] = k;
                    }
                } 
            } 
        }
        index = 0;
        //sb.append("Case " + cnum + ": ");
        //cnum++;
        printParenthesis(1, n-1, n, barr, letters); 
        sb.deleteCharAt(sb.length()-1);
        sb.deleteCharAt(0);
        System.out.println(sb.toString());
        sb = new StringBuilder();
	}

	public static void partyBudget(String[] inputs) {
		//there will be N inputs. Each input is space-separated into entrance fee, and fun rating.
		//Read the input, parse and represent in your own preference.
		//your print statements here
		int budget = Integer.parseInt(inputs[0].split(" ")[0]);
		int pcount = Integer.parseInt(inputs[0].split(" ")[1]);
		Party[] plist = new Party[inputs.length-1];
		for(int i = 1 ; i < inputs.length ; i++){
			plist[i-1] = new Party(inputs[i]);
		}

		Arrays.sort(plist);

		int[][] funval = new int[pcount+1][budget+1];
		
		for(int i = 0 ; i <= pcount ; i++){
			funval[i][0] = 0;
		}

		for(int i = 0 ; i <= budget ; i++){
			funval[0][i] = 0;
		}
		for(int i = 1 ; i <= pcount ; i++){
			for(int k = 1 ; k <= budget ; k++){
				if(k<plist[i-1].cost){
					funval[i][k] = funval[i-1][k];
					
				}else{
					funval[i][k] = Math.max(plist[i-1].fun + funval[i-1][k-plist[i-1].cost], funval[i-1][k]);
				}
			}
		}/*
		System.out.println("fun");
		for(int i = 0 ; i < pcount ; i++){
			for(int k = 0 ; k <= budget ; k++){
				System.out.print(funval[i][k] + ", ");
			}
			System.out.println();
		}*/
		int partybudget = 0;
		for(int i = 1; i <= budget ; i++){
			if(funval[pcount][i] == funval[pcount][budget]){
				partybudget = i;
				break;
			}
		}
		System.out.printf("%d %d\n", partybudget, funval[pcount][budget]);
	}

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
		/*
		Scanner sc1, sc2, sc3;
		sc1 = sc2 = sc3 = null;
		try{
			sc1 = new Scanner(new File("p1.txt"));
			sc2 = new Scanner(new File("p2.txt"));
			sc3 = new Scanner(new File("p3.txt"));
		}catch(Exception e){
			e.printStackTrace();
		}
		//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=284
		System.out.println("#1:");
		ArrayList<String> starr = new ArrayList<>();
		while(sc1.hasNextLine()){
			starr.add(sc1.nextLine());
		}
		assignTable(starr.toArray(new String[0]));

		starr = new ArrayList<>();
		//https://www.spoj.com/problems/PARTY/
		System.out.println("#2:");
		while(sc2.hasNextLine()){
			starr.add(sc2.nextLine());
		}
		partyBudget(starr.toArray(new String[0]));


		//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=944
		System.out.println("#3:");
		int slen = sc3.nextInt();
		int clen;
		while(slen!=0){
			clen = sc3.nextInt();
			int[] cuts = new int[clen];
			for(int i = 0 ; i < clen ; i++){
				cuts[i] = sc3.nextInt();
			}
			cut(slen, clen, cuts);
			slen = sc3.nextInt();
		}*/
	}
}
class Party implements Comparable<Party>{
	int cost;
	int fun;
	public Party(String s){
		cost = Integer.parseInt(s.split(" ")[0]);
		fun = Integer.parseInt(s.split(" ")[1]);
	}
	@Override
	public int compareTo(Party p){
		return Integer.compare(p.cost, this.cost);
	}
}