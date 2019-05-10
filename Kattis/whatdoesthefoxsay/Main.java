import java.util.*;

public class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int tc = sc.nextInt();
		sc.nextLine();
		while(tc-->0){
			ArrayList<String> al = new ArrayList<>();
			String[] sent = sc.nextLine().split(" ");
			String line = sc.nextLine();
			while(!line.equals("what does the fox say?")){
				al.add(line.split(" ")[2]);
				line = sc.nextLine();
			}
			for(int i = 0 ; i < sent.length ; i++){
				if(!al.contains(sent[i]))
					System.out.print(sent[i] + " ");
			}
			System.out.println();
		}
	}
}
