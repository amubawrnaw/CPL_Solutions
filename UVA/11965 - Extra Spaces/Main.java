import java.util.*;
public class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		StringBuilder sb;
		int c1 = sc.nextInt();
		for(int i = 0 ; i < c1 ; i++){
			if(i!=0) System.out.println("");
			sb = new StringBuilder();
			int c2 = sc.nextInt();
			sc.nextLine();
			while(c2-->0){
				sb.append(sc.nextLine());
				sb.append("\n");
			}
			System.out.println("Case "+ (i+1) +":");
			System.out.print(sb.toString().replaceAll(" {2,}"," "));
		}
	}
}