import java.util.*;

public class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		String in, newstr;
		while(sc.hasNextLine()){
			newstr = "";
			in = sc.nextLine();
			for(int i = 0 ; i < in.length() ; i++){
				newstr+= (char)((int)in.charAt(i)- 7);
			}
			System.out.println(newstr);
		}
	}
}
