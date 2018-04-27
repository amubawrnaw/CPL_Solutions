import java.util.*;

public class Main{

	public static long recursion(long r, int cnt){
		if(r==1) return cnt;
		else if (r%2==0){
			cnt++;
			return recursion(r/2,cnt);
		}else{
			cnt++;
			return recursion((3*r)+1, cnt);
		}
	}

	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		long i1, i2, max, temp;

		while(sc.hasNextLong()){
			temp = 0;
			max = -1;
			i1 = sc.nextLong();
			i2 = sc.nextLong();

			if(i1<i2){
				for(long i = i1;i<=i2;i++){
					temp = recursion(i, 1);
					if(temp>max) max = temp;
				}
			}else{
				for(long i = i2;i<=i1;i++){
					temp = recursion(i, 1);
					if(temp>max) max = temp;
				}
			}
			System.out.println(i1 + " " + i2 + " " + max);
		}
	}
}

