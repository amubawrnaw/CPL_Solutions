import java.util.*;

public class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int studs = sc.nextInt(), team = sc.nextInt();
		int[] inp = new int[studs];
		ArrayList<Integer> al = new ArrayList<>(); 

		for(int i = 0 ; i < studs ; i++){
			inp[i] = sc.nextInt();
		}
		String ans = "";
		for(int i = 0 ; i < inp.length ; i++){
			int temp = inp[i];
			if(al.indexOf(temp)==-1&&!al.contains(temp) && al.size()<team){
				ans+= i+1 + " ";
				al.add(temp);
			}
		}
		if(al.size() == team) System.out.println("YES\n" + ans.trim());
		else System.out.println("NO");
	}
}
