import java.util.*;

public class Main{


public static void solveMult(Matrix[] m){
	int[][] t1 = new int[m.length][m.length];
	int[][] t2 = new int[m.length][m.length];

	for(int i = 0 ; i < m.length ; i++){
		t1[i][i] = 0;
	}
}

public static void assignTable(String[] input) {
		//there will be N inputs. Each input is space-separated into A,B and C.
		//Read the input, parse and represent in your own preference.
		//your print statements here
		int cnt = Integer.parseInt(input[0]);
		Matrix[] marr = new Matrix[cnt];

		for(int i = 0 ; i < cnt ; i++){
			String[] spl = input[i].split(" ");
			marr[i] = new Matrix(Integer.parseInt(spl[0]), Integer.parseInt(spl[1]), spl[2]);
		}
		solveMult(marr);
	}

	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int tc = sc.nextInt();
		while(tc!=0){
			String[] starr = new String[tc+1];
			starr[0] = tc+"";
			for(int i = 1 ; i  < tc  ;i++){
				starr[i] =  "A" + i + " " + sc.nextLine();
			}
			assignTable(starr);
			tc = sc.nextInt();
		}

		
	}
}
class Matrix{
	int width,height;
	String symbol;
	public Matrix(int w, int h, String s){
		width = w;
		height = h;
		symbol = s;
	}
}