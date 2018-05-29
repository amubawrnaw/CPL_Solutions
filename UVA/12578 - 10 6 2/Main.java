import java.util.*;
import java.text.DecimalFormat;
public class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		DecimalFormat df = new DecimalFormat("0.00");

		int tc, len;
		double red, green, wid, rad;
		tc = sc.nextInt();
		while(tc-->0){
			len = sc.nextInt();
			wid = len * 6.0/10.0;
			rad = len * 1.0/5.0;
			red = rad * rad * Math.PI;
			green = (len * wid) - red;
			System.out.println(df.format(red) + " " + df.format(green));
		}
	}
}
