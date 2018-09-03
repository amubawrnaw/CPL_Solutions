import java.util.*;

public class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int cnt = sc.nextInt();

		while(cnt-->0){
			sc.nextLine();
			int amp = sc.nextInt();
			int freq = sc.nextInt();
			StringBuilder sb = new StringBuilder();
			while(freq-->0){
				for(int i = 1 ; i < amp +1 ; i++){
					for(int k = 0 ; k < i ; k++){
						sb.append(i);
					}
					if(freq>0||amp!=1)
					sb.append("\n");
				}
				for(int i = amp-1 ; i > 0 ; i--){
					for(int k = i ; k > 0 ; k--){
						sb.append(i);
					}
					if(freq>0 || i>1)
					sb.append("\n");
				}

				if(freq>0 || cnt>0){
					sb.append("\n");
				}
			}
			System.out.println(sb.toString());
		}
	}
}