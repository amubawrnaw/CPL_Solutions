import java.util.*;
import java.io.*;
import java.lang.Math.*;


public class Main{

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
	public static void main(String[] args){
		 Scanner sc3 = new Scanner(System.in);
		 int tc = sc3.nextInt();
		 while(tc-->0){
		 	int floors = sc3.nextInt();
		 	int[] farr = new int[floors];
		 	for(int i = 0 ; i < floors ; i++){
		 		farr[i] = sc3.nextInt();
		 	}
		 	if(floors!=0)
		 		design(farr);
		 	else System.out.println("0");
		 }
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