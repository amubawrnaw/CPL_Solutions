import java.util.*;

public class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		String[] inp;
		int wcount;
		while(sc.hasNextLine()){
			wcount = 0;
			inp = sc.nextLine().split(" ");
			for(int i = 0 ; i < inp.length ; i++){
				if(inp[i].matches("(([a-zA-Z]+)(\\W)?([a-zA-Z]+))")) wcount++;
			}
			System.out.println(wcount);
		}
	}
}