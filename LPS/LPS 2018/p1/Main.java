import java.util.*;
import java.io.*;
public class Main{
	public static void main(String[] args){
		Scanner sc = null;
		try{
			sc = new Scanner(System.in);
		}catch(Exception e){
			e.printStackTrace();
		}
		
		int cnt = sc.nextInt();
		while(cnt-->0){
			String in = sc.next();
			String rev = new StringBuilder(in).reverse().toString();

			char[] in1 = in.toCharArray();
			char[] in2 = rev.toCharArray();

			int[][] arr = new int[in.length()+1][in.length()+1];
			for(int i = 0 ; i < in.length()+1 ; i++){
				arr[0][i] = arr[i][0] = 0;
			}
			for(int i = 1, ia = 0 ; i <= in.length() ; i++, ia++){
				for(int k = 1 , ka = 0; k <= in.length() ; k++, ka++){
					if(in1[ia] == in2[ka]){
						arr[i][k] = arr[i-1][k]+1;
					}else{
						int i1 = arr[i-1][k];
						int i2 = arr[i][k-1];
						if(i1>i2) arr[i][k] = i1;
						else arr[i][k] = i2;
					}
				}
			}
			
			System.out.println(arr[in.length()][in.length()]);
		}

		
	}
}
