import java.util.*;

public class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		String line = sc.next();
		boolean found = false;
		int next;
		for(int i = 0; i < line.length() - 1 && !found; i++) {
			if (line.charAt(i) == line.charAt(i + 1) && line.charAt(i) == 's')
				found = true;
		}

		System.out.println(found?"hiss":"no hiss");
	}
}
