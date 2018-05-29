import java.util.*;


public class Main{
	public static int getMinSwap(ArrayList<Integer> al){
		int cnt = 0, temp, min, len = al.size();

		while(!al.isEmpty()){
			min = 999999;
			temp = -1;
			//look for smallest 
			for(int i = 0 ; i < al.size(); i++){
				if(min>al.get(i)){
					min = al.get(i);
					temp = i;
				}
			}
			cnt+=temp;
			al.remove(temp);
		}

		/*
		for(int i = 1 ; i <= len ; i++){
			temp = al.indexOf(i);
			cnt+= temp;
			al.remove(temp);
		}*/
		return cnt;
	}

	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int cnt;
		ArrayList<Integer> arr;
		while(sc.hasNextInt()){
			arr = new ArrayList<>();
			cnt = sc.nextInt();
			while(cnt-->0){
				arr.add(sc.nextInt());
			}
			System.out.println("Minimum exchange operations : " + getMinSwap(arr));
		}
	}
}