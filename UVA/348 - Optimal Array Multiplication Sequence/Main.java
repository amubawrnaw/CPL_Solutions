import java.util.*;

public class Main{
	public static void assignTable(String[] input) {
		//there will be N inputs. Each input is space-separated into A,B and C.
		//Read the input, parse and represent in your own preference.
		//your print statements here
		int size = Integer.parseInt(input[0]);
		Matrix[] marr = new Matrix[size];
		for(int i = 0 ; i < size ; i++){
			Matrix[i] = new Matrix(input[i+1]);
		}
		int[][] m  = new int[size][size];
		int[][] s  = new int[size][size];

		for(int i = 0 ; i < m ; i++){
			m[i][i] = 0;
		}


	}
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int mc = sc.nextInt();
		while(mc!=0){
			String[] str = new String[mc+1];
			str[0] = mc + "";
			for(int i = 1 ; i <= mc ; i++){
				str[i] = "A" + i + " " + sc.nextInt() + " " + sc.nextInt();
			}
			assignTable(str);
			mc = sc.nextInt();
		}
	}
}
class Matrix{
	int w;
	int h;
	String symb;
	public Matrix(String s){
		String[] spl = s.split(" ");
		symb = spl[0];
		w = Integer.parseInt(spl[1]);
		h = Integer.parseInt(spl[2]);
	}
}
