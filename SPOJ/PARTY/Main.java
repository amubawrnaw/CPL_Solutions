import java.util.*;

public class Main{
	/*
	public static int getParty(int budget, int maxbudget, int currind, int plist, int[] memo){
		if(curr == len){
			return 0;
		}else if(memo[curr]!=-1){
			return memo[curr];
		}else{
			int x1 = getParty(curr++, len, plist, memo, val+plist[curr]);
			int x2 = getParty(curr++, len, plist, memo, val);
			memo[curr] = ;
		}
	}*/

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
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);

		int b = sc.nextInt();
		int p = sc.nextInt();
		while(b!=0 && p!=0){
			int[][] in = new int[p][2];
			for(int i = 0 ; i < p ; i++){
				in[i][0] = sc.nextInt();
				in[i][1] = sc.nextInt();
			}
			String[] sin = new String[p+1];
			sin[0] = b + " " + p;
			for(int i = 1 ; i <= p ; i++){
				sin[i] = in[i-1][0] + " " + in[i-1][1];
			}
			partyBudget(sin);

			b = sc.nextInt();
			p = sc.nextInt();
		}
		
		
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