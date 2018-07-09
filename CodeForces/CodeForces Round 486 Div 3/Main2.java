import java.util.*;
import java.math.*;
public class Main2{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int tc = sc.nextInt();
		int[] inp = new int[tc];
		ArrayList<Integer> valid = new ArrayList<>();
		ArrayList<Integer> found = new ArrayList<>();
		for(int i = 0 ; i <= 29 ; i++){
			valid.add((int)Math.pow(2,i));
		}
		for(int i = 0 ; i < tc ; i++){
			inp[i] = sc.nextInt();
		}
		int cnt = 0;
		String ans = "";
		for(int i = 0 ; i < tc ; i++){
			for(int k = i+1 ; k < tc ; k++){
				int temp = inp[i] - inp[k];
				if(temp<0) temp*=-1;
				if(valid.contains(temp) && !found.contains(temp)){
					cnt++;
					ans+= inp[i] + " ";
					found.add(temp);
					break;
				}
			}
		}
		if(cnt!=0) System.out.println(cnt + "\n" + ans.trim());
		else System.out.println("0");

		
	}
}
