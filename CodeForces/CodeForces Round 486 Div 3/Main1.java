import java.util.*;

public class Main1{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int tc = sc.nextInt();
		String[] str = new String[tc];
		for(int i = 0 ; i < tc ; i++){
			str[i] = sc.next();
		}
		int bigIndex = -1, biglen = -1;
		for(int i = 0 ; i < tc ; i++){
			if(str[i].length() > biglen){
				biglen = str[i].length();
				bigIndex = i;
			}
		}
		boolean pasok = true;
		for(int i = 0 ; i < tc; i++){
			if(str[bigIndex].indexOf(str[i])==-1)
				pasok = false;
		}

		if(pasok){
			String ans = "";
			Arrays.sort(str, Comparator.comparingInt(String::length));
			for(int i = 0 ; i < tc ; i++)
				ans+=str[i] + "\n";
			System.out.print("YES\n" + ans.trim());
		}else{
			System.out.println("NO");
		}

	}
}
