import java.util.*;
import java.io.*;
import java.lang.Math.*;


public class Main{
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
	public static void main(String[] args){
		Scanner sc2 = new Scanner(System.in);
		int tc = sc2.nextInt();
		while(tc-->0){
		 	int jobs = sc2.nextInt();
		 	int[] jtime = new int[jobs];
			int[] fine = new int[jobs];
		 	for(int i = 0 ; i < jobs ; i++){
		 		jtime[i] = sc2.nextInt();
		 		fine[i] = sc2.nextInt();
		 	}
		 	shoemaker(jtime, fine);
		 	if(tc>0) System.out.println();
		 }
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
        return Integer.compare(s.fee * this.days,this.fee * s.days);
    }
}