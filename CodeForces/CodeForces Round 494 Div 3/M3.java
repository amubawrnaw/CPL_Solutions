import java.util.*;

public class M3{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int days = sc.nextInt();
		int segc = sc.nextInt();
		int[] daysArr = new int[days];
		ArrayList<Double> arr = new ArrayList<>();
		int sum = 0;
		for(int i = 0 ; i < days ; i++){
			int temp = sc.nextInt();
			daysArr[i] = temp;
			sum+=temp;
		}

		for(int i = 0 ; i <= days%segc ; i++){
			Double temp = 0.0;
			for(int k = i ; k < i+segc ; k++){
				temp+=daysArr[k];
			}
			temp/=segc;
			arr.add(temp);
		}
		arr.add((sum*1.0)/(days*1.0));
		Double max = -1.0;
		for(int i = 0 ; i < arr.size(); i++){
			if(arr.get(i)>max) max = arr.get(i);
		}
		
		//Double roundOff = Math.round(max * 1000000000000000.0) / 1000000000000000.0;
		System.out.println(max);
	}
}
