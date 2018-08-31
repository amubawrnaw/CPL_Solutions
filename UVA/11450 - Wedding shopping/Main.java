import java.util.*;

public class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		ArrayList<Integer[]> catArr;
		int cnt = sc.nextInt();
		while(cnt-->0){
			int budget = sc.nextInt();
			int cat = sc.nextInt();
			carArr = new ArrayList<>();
			for(int i = 0 ; i < cat ; i++){
				String[] temp = sc.nextLine().split(" ");
				int[] tmp2 = new int[temp.length];
				for(int k = 0 ; k < temp.length ; k++){
					tmp2[k] = Integer.parseInt(temp[k]);
				}
				catArr.add(tmp2);
			}
			
		}
		
	}
}
