import java.util.*;

public class Main3{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int seqcnt = sc.nextInt();
		ArrayList<int[]> al = new ArrayList<>();
		ArrayList<int[]> sums = new ArrayList<>();
		while(seqcnt-->0){
			int ssize = sc.nextInt(), tempsum = 0;
			int[] temp = new int[ssize], tempans = new int[ssize];

			for(int i = 0 ; i < ssize ; i++){
				int tem = sc.nextInt();
				tempsum+= temp;
				temp[i] = tem;
			}
			for(int i = 0 ; i < ssize ; i++){
				tempans[i] = tempsum-temp[i];
			}
			sums.add(tempans);
			al.add(temp);
		}
		boolean found = false;
		int sumIndex1, sumIndex2, number;
		for(int i = 0 ; i < sums.size() && !found; i++){
			for(int k = i+1 ; k < sums.size() && !found; k++){
				int[] t1 = sums.get(i);
				int[] t2 = sums.get(k);

				for(int j = 0 ; j < t1 && !found ; j++){

					for(int l = 0 ; l < t2 && !found ; l++){
						if(t1[j] == t2[l]){
							sumIndex1 = i;
							sumIndex2 = k;
							number = t1[j];
							found = true;
						}
					}
				}
			}
		}
		


		
	}
}
