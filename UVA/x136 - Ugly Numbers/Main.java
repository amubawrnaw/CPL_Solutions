public class Main{
	public static void main(String[] args){
		int x = 0;
		int ans = 1;
		while(x!=1500){
			if(ans%2==0 && ans%3 == 0||ans%3==0 && ans%5 == 0||ans%5==0 && ans%2 == 0){
				x++;
				ans++;
			}else{
				ans++;
			}
		}
		System.out.println(ans);
	}
}