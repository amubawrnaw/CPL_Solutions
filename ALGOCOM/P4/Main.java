import java.util.*;
import java.io.*;
import java.lang.Math.*;


public class Main{
	public static void assignTable2lmao(int[] tear, int[] tabr) {
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
	public static void assignTable(String[] input) {
		//properly read the input, parse and represent in your own preference.
		//your print statements here
		//read inputs yeet
		String[] t1, t2;
		t1 = input[1].split(" ");
		t2 = input[2].split(" ");
		int[] i1, i2;
		i1 = new int[t1.length];
		i2 = new int[t2.length];
		for(int i = 0 ; i < t1.length ; i++){
			i1[i] = Integer.parseInt(t1[i]);
		}
		for(int i = 0 ; i < t2.length ; i++){
			i2[i] = Integer.parseInt(t2[i]);
		}
		assignTable2lmao(i1, i2);
		
	}
	public static void shoemaker(int[] jobTime, int[] fine) {
		//your print statements here
		ShoeMaker[] sm = new ShoeMaker[jobTime.length];
		for(int i = 0 ; i < jobTime.length ; i++){
			sm[i] = new ShoeMaker(jobTime[i], fine[i], i+1);
		}
		Arrays.sort(sm);
		StringBuilder sb = new StringBuilder();
		for(int i = 0 ; i < sm.length ; i++){
			sb.append(sm[i].index + " ");
		}
		System.out.println(sb.toString().trim());
	}
	public static int findfloors(Floor[] f, int c){
		int curr = 0;
		for(int i = 0 ; i< f.length ; i++){
			if(c==f[i].color){
				curr++;
				c = (f[i].color==1?0:1);
			}
		}
		return curr;
	}
	public static void design(int[] floors) {
		//your print statements here
		Floor[] farr = new Floor[floors.length];
		for(int i = 0 ; i < floors.length ; i++){
			farr[i] = new Floor(Math.abs(floors[i]), (floors[i]>0?1:0));
		}
		Arrays.sort(farr);
		
		System.out.println(Math.max(findfloors(farr, 1), findfloors(farr, 0)));
	}
	public static void main(String[] args){/*
		Scanner sc1, sc2, sc3;
		sc1 = sc2 = sc3 = null;
		try{
			sc1 = new Scanner(new File("p1.txt"));
			sc2 = new Scanner(new File("p2.txt"));
			sc3 = new Scanner(new File("p3.txt"));
		}catch(Exception e){
			e.printStackTrace();
		}
		//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1190
		System.out.println("#1:");
		ArrayList<String> starr = new ArrayList<>();
		while(sc1.hasNextLine()){
			starr.add(sc1.nextLine());
		}
		assignTable(starr.toArray(new String[0]));
		//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=967
		System.out.println("#2:");
		while(sc2.hasNextInt()){
		 	int jobs = sc2.nextInt();
		 	int[] jtime = new int[jobs];
			int[] fine = new int[jobs];
		 	for(int i = 0 ; i < jobs ; i++){
		 		jtime[i] = sc2.nextInt();
		 		fine[i] = sc2.nextInt();
		 	}
		 	shoemaker(jtime, fine);
		 }
		 //https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1980
		 System.out.println("#3:");
		 
		 while(sc3.hasNextInt()){
		 	int floors = sc3.nextInt();
		 	int[] farr = new int[floors];
		 	for(int i = 0 ; i < floors ; i++){
		 		farr[i] = sc3.nextInt();
		 	}
		 	design(farr);
		 }*/
	}
}
class Floor implements Comparable<Floor>{
	int floor;
	int color;
	public Floor(int f, int c){
		floor = f;
		color = c;
	}
	@Override
    public int compareTo(Floor f) {
        return Integer.compare(this.floor, f.floor);
    }
}

class ShoeMaker implements Comparable<ShoeMaker>{
	int days;
	int fee;
	int index;
	public ShoeMaker(int d, int f, int i){
		days = d;
		fee = f;
		index = i;
	}

	@Override
    public int compareTo(ShoeMaker s) {
        return Integer.compare(s.fee * this.days, this.fee * s.days);
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