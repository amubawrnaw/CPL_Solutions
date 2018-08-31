import java.util.*;
public class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int c1 = sc.nextInt();
		while(c1-->0){
			int c2 = sc.nextInt();
			String[] s = new String[c2];
			for(int i = 0 ; i < c2 ; i++){
				char[] temp = sc.nextLine().toCharArray();
				String n = "";
				for(int k = 0 ; k < temp.length ; k++){
					while(temp[k]==' '){
						k++;
					}
					n+=k;
				}
				s[i] = new String(temp);
			}
			for(int i = 0 ; i < s.length ; i++){
				System.out.println(s[i]);
			}
		}
	}
}