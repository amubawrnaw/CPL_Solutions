import java.util.*;

public class Main{
	public static int getMinSwap(ArrayList<Integer> al){
		int cnt = 0, temp = 0, len = al.size();

		for(int i = 1 ; i <= len ; i++){
			temp = al.indexOf(i);
			cnt+= temp;
			al.remove(temp);
		}
		return cnt;
	}

	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);

		int cnt = sc.nextInt(), cnt2;
		ArrayList<Integer> arr;
		while(cnt-->0){
			arr = new ArrayList<>();
			cnt2 = sc.nextInt();
			while(cnt2-->0){
				arr.add(sc.nextInt());
			}
			System.out.println("Optimal train swapping takes " + getMinSwap(arr) + " swaps.");
		}

	}
}

