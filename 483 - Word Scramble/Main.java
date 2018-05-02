import java.util.*;

public class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		String[] input;
		String out;
		while(sc.hasNextLine()){
			out = "";
			input = sc.nextLine().split(" ");
			for(int i = 0 ; i < input.length ; i++){
				for(int j = input[i].length() -1; j >= 0 ; j--){
					out+=input[i].charAt(j);
				}
				if(i!=input.length-1) out+=" ";
			}
			System.out.println(out);
		}
	}
}