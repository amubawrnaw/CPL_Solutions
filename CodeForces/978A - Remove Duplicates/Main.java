import java.util.*;

public class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		ArrayList<Integer> al = new ArrayList<>();
		int tc = sc.nextInt();
		while(tc-->0){
			int temp = sc.nextInt();
			if(!al.contains(temp))al.add(temp);
			else{
				int ind = al.indexOf(temp);
				al.remove(ind);
				al.add(temp);
			}
		}
		StringBuilder sb = new StringBuilder();
		for(int i = 0 ; i < al.size(); i ++){
			sb.append(al.get(i));
			if(i != al.size()-1) sb.append(" "); 
		}
		System.out.println(al.size()+"\n"+sb.toString());
	}
}
