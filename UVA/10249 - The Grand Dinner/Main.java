import java.util.*;
import java.io.*;
import java.lang.Math.*;

public class Main{
	public static void assignTable(int[] tear, int[] tabr) {
		//properly read the input, parse and represent in your own preference.
		//your print statements here

		PriorityQueue<Table>tables = new PriorityQueue<>();
		Team[] teams = new Team[tear.length];
		int[][] ans = new int[tear.length][tabr.length];
		for(int i = 0 ; i < tear.length ; i++){
			teams[i] = new Team(tear[i], i);
		}
		Arrays.sort(teams);
		for(int i = 0 ; i < tabr.length ; i++){
			tables.add(new Table(i+1,tabr[i]));
		}
		Table curr;
		boolean end = false;
		for(int i = 0 ; i < tear.length && !end;i++){
			if(teams[i].size > tables.size()){
				end = true;
			}else{
				Table[] temp = tables.toArray(new Table[0]);
				for(int k = 0 ; k < teams[i].size ; k++){
					curr = temp[k];
					ans[teams[i].ind][k] = curr.ind;
					curr.size--;
					temp[k] = curr;
				}
				tables = new PriorityQueue<>();
				for(int k = 0; k < temp.length; k++){
					if(temp[k].size > 0){
						tables.add(temp[k]);
					}
				}
			}
		}

		if(!end){
			StringBuilder sb = new StringBuilder();
			sb.append("1\n");
			for(int i = 0 ; i < tear.length ; i++){
				Arrays.sort(ans[i],0, tear[i]);
				for(int k = 0 ; k < tear[i] ; k++){
					sb.append(ans[i][k] + " ");
				}
				sb.append("\n");
			}
			System.out.print(sb.toString());
		}else
			System.out.println("0");
		
	}
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		while(true){
			int teamc = sc.nextInt();
			int tablec = sc.nextInt();
			if(teamc == 0 && tablec == 0) break;
			int[] teamarr = new int[teamc];
			int[] tablearr = new int[tablec];

			for(int i = 0 ; i < teamc ; i++)
				teamarr[i] = sc.nextInt();
			for(int i = 0 ; i < tablec ; i++)
				tablearr[i] = sc.nextInt();
			assignTable(teamarr, tablearr);
		}
	}
}
class Table implements Comparable<Table>{
	int ind;
	int size;
	public Table(int i, int s){
		ind = i;
		size = s;
	}

	@Override
	public int compareTo(Table t){
		//compare empty spaces for TEAMS
		return Integer.compare(t.size, this.size);
	}
}
class Team implements Comparable<Team>{
	int ind;
	int size;
	public Team(int s, int i){
		ind = i;
		size = s;
	}
	@Override
	public int compareTo(Team t){
		return Integer.compare(t.size, this.size);
	}
}