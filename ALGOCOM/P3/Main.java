import java.util.*;
import java.io.*;
import java.lang.Math.*;


public class Main{
	
	public static void skyline (Building[] B) {
	//put your code here and the print statements for the output.
		/*
		int[] bldgcoords = new int[10001];
		int[] basecoords = new int[10001];
		for(int i = 0 ; i < 10001 ; i++){
			bldgcoords[i] = 0;
			basecoords[i] = 0;
		}
		int height;
		int minl = B[0].left;
		int maxr = 0;
		Building curr;
		for(int i = 0 ; i < B.length ; i++){
			curr = B[i];
			height = curr.height;
			if(curr.right>maxr) maxr = curr.right;
			for(int k = curr.left ; k <= curr.right ; k++){
				if(bldgcoords[k]<height){
					basecoords[k] = bldgcoords[k];
					bldgcoords[k] = height;
				}
			}
		}
		int cur = 0;
		StringBuilder outy = new StringBuilder();
		StringBuilder sb = new StringBuilder();
		for(int i = minl ; i < maxr + 2 ; i++){
			outy.append(bldgcoords[i] + ", ");
			if(cur > bldgcoords[i]){
				cur = bldgcoords[i];
				sb.append(i-1 + " " + bldgcoords[i] + " ");
			}else if(cur < bldgcoords[i]){
				cur = bldgcoords[i];
				sb.append(i + " " + bldgcoords[i] + " ");
			}
		}
		//System.out.println(outy.toString().trim());
		System.out.println(sb.toString().trim());
		*/

		int bcount = B.length;
		ArrayList<Building> ans = new ArrayList<>();
		StringBuilder sb = new StringBuilder();
		PriorityQueue<Building> pq = new PriorityQueue<>();
		int right = B[0].right;
		Building currb, nextb;
		for(int i = 0 ; i < bcount ; i++){
			currb = B[i];
			//if bldg is on the right
			if(currb.left > right){
				Building b = new Building();
				b.left = right;
				b.right = currb.left;
				b.height = 0;
				pq.add(b);
			}

			pq.add(currb);
			right = Math.max(right, currb.right);
		}
		currb = pq.poll();
		sb.append(currb.left + " " + currb.height + " ");

		while(!pq.isEmpty()){
			nextb = pq.poll();
			if(nextb.height == currb.height && nextb.left == currb.right){
				currb = nextb;
			}else if (nextb.height > currb.height){
				if(nextb.right < currb.right){
					currb.left = nextb.right;
					pq.add(currb);
				}
				currb = nextb;
				sb.append(currb.left + " " + currb.height + " ");
			}else{
				if(nextb.left == currb.right){
					currb = nextb;
					sb.append(currb.left + " " + currb.height + " ");
				}else if(nextb.right > currb.right){
					nextb.left = currb.right;
					pq.add(nextb);
				}
			}
		}
		sb.append(currb.right + " 0");
		System.out.println(sb.toString());
	}

	public static void mergesort (int[] A) {
	//put your code here and the print statements for the output.
		itermerge(A);
		StringBuilder sb = new StringBuilder();
		for(int i = 0 ; i < A.length ; i++){
			sb.append(A[i] + " ");
		}
		System.out.println(sb.toString().trim());
	}
	//splits the array to 2
	public static void itermerge(int[] A){
		int size = A.length;
		int curr_size , left_start;
		for(curr_size  = 1 ; curr_size  <= size-1 ; curr_size = 2*curr_size){
			for(left_start = 0 ; left_start< size-1; left_start+=2*curr_size){
				int mid = Math.min(left_start + curr_size - 1, size-1); 
				int right_end = Math.min(left_start + 2*curr_size - 1, size-1); 
				merge(A, left_start, mid, right_end);
			}
		}
	}

	public static void merge(int[] merged, int l, int m, int r){
		int n1 = m-l+1;
		int n2 = r-m;
		int[] left = new int[n1], right = new int[n2];

		for (int i = 0; i < n1; i++) 
            left[i] = merged[l + i]; 
        for (int j = 0; j < n2; j++) 
            right[j] = merged[m + 1+ j]; 

		int i = 0, j = 0, k = l;
		while(i < n1 && j < n2){
			if(left[i] <= right[j]){
				merged[k] = left[i];
				i++;
			}else{
				merged[k] = right[j];
				j++;
			}
			k++;
		}
		while(i<left.length){
			merged[k] = left[i];
			i++;
			k++;
		}
		while(i<right.length){
			merged[k] = right[j];
			j++;
			k++;
		}
	}
	//global variables for tracking which pair is minimum.
	static Pt  pair1, pair2;
	static double gmin = 999999;
	//unlucky case
	public static double strip(Pt[] P, int size){
		Arrays.sort(P, new Comparator<Pt>(){
			public int compare(Pt p1, Pt p2){
				return p1.y - p2.y;
			}
		});

		for(int i = 0 ; i < size ; i++){
			for(int k = i+1 ; k < size && (P[k].y - P[i].y) < gmin ; k++){
				if(eucDist(P[i], P[k])<gmin){
					pair1 = P[i];
					pair2 = P[k];
					gmin = eucDist(P[i], P[k]);
				}
			}
		}
		return gmin;
	}
	//recursive fucntion
	public static double smallestPair(Pt[] P){
		int psize = P.length;
		if(psize<=3){//base case
			double temp;
			for(int i = 0 ; i < psize ; i++){
				for(int k = i+1 ; k < psize ; k++){
					temp = eucDist(P[i], P[k]);
					if(temp<gmin){
						gmin = temp;
						pair1 = P[i];
						pair2 = P[k];
					}
				}
			}
			return gmin;
		}
		//recursive case
		int mid = (int) psize/2;
		Pt midpt = P[mid];
		double ans = Math.min(smallestPair(Arrays.copyOfRange(P, 0, mid)), smallestPair(Arrays.copyOfRange(P, mid, psize)));
	
		Pt[] strip = new Pt[psize];
		int ssize = 0;
		for(int i = 0 ; i < psize; i++){
			if(Math.abs(P[i].x - midpt.x) < ans){
				strip[ssize] = P[ssize];
				ssize++;
			}
		}
		return Math.min(ans, strip(Arrays.copyOfRange(strip, 0, ssize), ssize));
	}
	public static void closestPair (Pt[] P) {
	//put your code here and the print statements for the output.
		int psize = P.length;
		Pt[] psort = new Pt[psize];
		for(int i = 0 ; i < psize ; i++){
			psort[i] = P[i];
		}

		Arrays.sort(psort, new Comparator<Pt>(){
			public int compare(Pt p1, Pt p2){
				return p1.x - p2.x;
			}
		});

		double ans = smallestPair(P);
		int p1c = -1, p2c = -1;
		for(int i = 0 ; i < psize ; i++){
			if(P[i].x == pair1.x && P[i].y == pair1.y){
				p1c = i;
				break;
			}
		}
		for(int i = 0 ; i < psize ; i++){
			if(P[i].x == pair2.x && P[i].y == pair2.y){
				p2c = i;
				break;
			}
		}
		System.out.printf("%d %d %.6f", p1c, p2c, ans);
	}

	public static double eucDist(Pt p1, Pt p2){
		double x = p1.x - p2.x;
		double y = p1.y - p2.y;
		return Math.sqrt((x*x) + (y*y));
	}

	public static void main(String[] args){
		/*
		Scanner bldgin, ptsin, mergein;
		bldgin = ptsin = mergein = null;
		try{
			bldgin = new Scanner(new File("bldg.txt"));
			mergein = new Scanner(new File("merge.txt"));
			ptsin = new Scanner(new File("pts.txt"));
		}catch(Exception e){

		}
		//skyline problem
		ArrayList<Building> bldgs = new ArrayList<>();
		while(bldgin.hasNextInt()){
			Building b = new Building();
			int l, r, h;
			b.left = bldgin.nextInt();
			b.height = bldgin.nextInt();
			b.right = bldgin.nextInt();

			bldgs.add(b);
		}
		Main.skyline(bldgs.toArray(new Building[0]));
		
		//merge sort problem
		//tinamad ako mag scan ng input sa merge sort lmao
		int[] sort=new int[]{9, 8, 7, 6, 2, 2, 0};
		mergesort(sort);

		//pair points problem
		int pcount = ptsin.nextInt();
		Pt[] ptarr = new Pt[pcount];
		for(int i = 0 ; i < pcount ; i++){
			Pt pt = new Pt();
			pt.x = ptsin.nextInt();
			pt.y = ptsin.nextInt();
			ptarr[i] = pt;
		}
		closestPair(ptarr);
		*/
	}
}
 class Building implements Comparable<Building>{
	public int left; //the left X-coordinate
	public int right; //the right X-coordinate
	public int height; //the height

	@Override
    public int compareTo(Building b) {
        if (this.left == b.left) {
            return Integer.compare(b.height, this.height);
        } else {
            return Integer.compare(this.left, b.left);
        }
    }
}

 class Pt {
	public int x; //X-coordinate
	public int y; // Y-coordinate
}