import java.util.*;

public class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int cnt = sc.nextInt(), input, denom, paid, temp, dcnt;
		int[] monies;
		while(cnt-->0){
			input = sc.nextInt();
			denom = sc.nextInt();
			paid = 0;
			dcnt = 0;
			monies = new int[denom];
			for(int i = 0 ; i < denom; i++){
				monies[i] = sc.nextInt();
			}
			Arrays.sort(monies);
			for(int i = monies.length -1; i >= 0 ; i--){
				
				temp = input/monies[i];
				paid = input%monies[i];
				System.out.println("input:" + input + " : " + monies[i] + " " + paid);
				dcnt+=temp;
				input%=monies[i];
			}
			System.out.println(paid + " " + dcnt);
		}

		
	}
}
