import java.util.*;

public class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		char[] in;
		int c;
		while(sc.hasNextLine()){
			in = sc.nextLine().toCharArray();;
			for(int i = 0 ; i < in.length ; i++){
				c = (int)in[i];
				in[i] = (char)(c - 7);
			}
			System.out.println(new String(in));
		}
	}
}