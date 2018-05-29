import java.util.*;

public class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int size;
		int[] arr;
		size = sc.nextInt();
		while(size!=0){
			arr = new int[size];
			for(int i = 0 ; i < size ; i++){
				arr[i] = sc.nextInt();
			}
			Arrays.sort(arr);
			StringBuilder sb = new StringBuilder();
			for(int i = 0 ; i < size ; i++){
				sb.append(arr[i]);
				if(i!=size-1) sb.append(" ");
			}
			System.out.println(sb.toString());
			size = sc.nextInt();
		}
	}
}
