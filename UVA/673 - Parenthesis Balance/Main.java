import java.util.*;

public class Main{

	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);

		int loops = sc.nextInt();
		sc.nextLine();
		String input;
		boolean valid;
		Stack<Integer> s = new Stack<>();
		while(loops-->0){
			input = sc.nextLine();
			valid = true;
			try{
				for(int i = 0 ; i < input.length() && valid; i++){
					char c = input.charAt(i);
					if(c == '[') s.push(1);
					else if(c == ']'){
						if(s.pop()!=1){ valid = false; break; }
					}
					else if(c == '(') s.push(2);
					else if(c == ')'){
						if(s.pop()!=2){ valid = false; break; }
					}
				}
			}catch(Exception e){
				valid = false;
			}
			if(s.empty() && valid) System.out.println("Yes");
			else{
				System.out.println("No");
				while(!s.empty()) s.pop();
			}
		}
	}
}