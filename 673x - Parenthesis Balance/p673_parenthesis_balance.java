import java.util.*;

public class p673_parenthesis_balance{

	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);

		int loops = sc.nextInt();
		sc.nextLine();
		String input;
		HashMap<Character,Integer> secret = new HashMap<Character,Integer>();

		secret.put('(',1);
		secret.put(')',-1);
		secret.put('[',1);
		secret.put(']',-1);

		int tite, tite2;
		while(loops-->0){
			tite = 0;
			tite2 = 0;
			input = sc.nextLine();
			for(int i = 0 ; i < input.length() ; i++){
				char c = input.charAt(i);
				if(secret.get(c)!=null)
					if(c=='(' || c == ')') tite+= secret.get(c);
					else tite2+= secret.get(c);
				if(tite<0 || tite2<0){
					break;
				}
			}
			if(tite==0 && tite2 == 0){
				System.out.println("Yes");
			}else{
				System.out.println("No");
			}

		}
		System.out.println("");
	}

}