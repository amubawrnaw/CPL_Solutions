import java.util.*;
import java.math.*;
public class Main{
	public static int pow(int val, int pow){
		pow--;
		int new_pow = val;
		while(pow-->0){
			new_pow*=val;
		}
		return new_pow;
	}
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int deg = sc.nextInt();
		while(deg!=0){
			int val = sc.nextInt();
			int[] exps = new int[deg+1];
			int[] coef = new int[deg+1];
			int[] ans = new int[3];
			for(int i = 0 , j = deg ; i < deg ; i++, j--)
				exps[i] = j;
			exps[deg] = 1;

			for(int i = 0 ; i < deg+1 ; i++){
				coef[i] = sc.nextInt();
			}
			int sum = 0 ;
			int[] t1 = new int[deg+1];
			for(int i = 0 ; i < deg ; i++){
				t1[i]= Main.pow(val,exps[i]);
				t1[i]*=coef[i];
			}
			t1[deg] = coef[deg];
			for(int i = 0 ; i < t1.length ; i++){
				sum+= t1[i];
			}
			System.out.print(sum + " ");
			sum = 0;

			deg--;
			if(deg != -1){
				for(int i = 0 ; i < deg ; i++){
					if(exps[i]!=1){
						coef[i]*=exps[i];
						exps[i]--;
					}
				}
				t1 = new int[deg+1];
				for(int i = 0 ; i < deg ; i++){
					t1[i]= Main.pow(val,exps[i]);
					t1[i]*=coef[i];
				}
				t1[deg] = coef[deg];
				for(int i = 0 ; i < t1.length ; i++){
					sum+= t1[i];
				}
				System.out.print(sum + " ");
				sum = 0;

				deg--;
				if(deg!=-1){
					for(int i = 0 ; i < deg ; i++){
						if(exps[i]!=1){
							coef[i]*=exps[i];
							exps[i]--;
						}
					}
					t1 = new int[deg+1];
					for(int i = 0 ; i < deg ; i++){
						t1[i]= Main.pow(val,exps[i]);
						t1[i]*=coef[i];
					}
					t1[deg] = coef[deg];
					for(int i = 0 ; i < t1.length ; i++){
						sum+= t1[i];		
					}
					System.out.println(sum);
				}else{
					System.out.println("0");
				}
				
			}else{
				System.out.println("0 0");
			}
			deg = sc.nextInt();
		}
	}
}
