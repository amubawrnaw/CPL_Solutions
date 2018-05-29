import java.util.*;

public class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		String in, newstr;
		int c;
		while(sc.hasNextLine()){
			newstr = "";
			in = sc.nextLine();
			for(int i = 0 ; i < in.length() ; i++){
				c = (int)in.charAt(i);
				newstr+= (char)(c - 7);
			}
			System.out.print(newstr);
			if(sc.hasNextLine()) System.out.println();
		}
	}
}