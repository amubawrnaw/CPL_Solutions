import java.util.*;

public class M1{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int inp = sc.nextInt();
		int[] arr = new int[inp];
		for(int i = 0 ; i < inp ; i++){
			arr[i]= sc.nextInt();
		}
		int temp;
		for(int i = 0 ; i < inp ; i++){
			temp = arr[i];

			for(int k = 0 ; k < inp ; k++){
				if(arr[k] == temp){
					if(temp%2==0){
						arr[k] = temp-1;
					}
				}
			}
		}
		String s = "";
		for(int i = 0 ; i < inp ; i++){
			s+= arr[i] + " ";
		}
		System.out.println(s.trim());
		
	}
}
