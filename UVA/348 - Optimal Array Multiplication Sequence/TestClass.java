import java.util.*;

public class TestClass {
    static int cnum = 1;
    static int index;
	static StringBuilder sb = new StringBuilder();
	public static void printParenthesis(int i, int j, int n, int bracket[][], String[] letters)
	{
	    if (i == j)
	    {
	        sb.append(letters[index]);
	        index++;
	        return;
	    }
	    sb.append("(");
	    printParenthesis(i, bracket[i][j], n, bracket, letters);
        //sb.append(" x ");
	    printParenthesis(bracket[i][j]+1, j, n, bracket, letters);
	    sb.append(")");
	}
	public static void assignTable(String[] input){
        int n = Integer.parseInt(input[0]);
        ArrayList<Integer> pt = new ArrayList<Integer>();
        ArrayList<String> mname = new ArrayList<String>();

        for (int i = 1; i <= n; i++) {
            String[] split = input[i].split(" ");
            mname.add(split[0]);
            pt.add(Integer.parseInt(split[1]));
        }
        pt.add(Integer.parseInt(input[n].split(" ")[2]));
        fillTable(n+1, pt, mname);
    }
	public static void fillTable(int n, ArrayList<Integer> pt, ArrayList<String> mname){
        int m[][] = new int[n][n];
        int barr[][] = new int[n][n];

        Integer[] p = pt.toArray(new Integer[pt.size()]);
        String[] letters = mname.toArray(new String[mname.size()]);
        int i, j, k, L, q; 
        for(i = 1; i < n; i++) 
            m[i][i] = 0; 
        
        for (L=2; L<n ; L++) { 
            for (i=1; i<n-L+1; i++){ 
                j = i+L-1; 
                if(j == n) continue; 
                m[i][j] = Integer.MAX_VALUE; 
                for (k=i; k<=j-1; k++){ 
                    q = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j]; 
                    if (q < m[i][j]) {
                        m[i][j] = q; 
                    	barr[i][j] = k;
                    }
                } 
            } 
        }
        index = 0;
        //sb.append("Case " + cnum + ": ");
        //cnum++;
        printParenthesis(1, n-1, n, barr, letters); 
        sb.deleteCharAt(sb.length()-1);
        sb.deleteCharAt(0);
        System.out.println(sb.toString());
        sb = new StringBuilder();
	}
    public static void main(String[] args) {
        //String[] matrix = {"3","A 10 30", "B 30 5", "C 5 60"};
        //String[] matrix = {"A 40 20", "B 20 30", "C 30 10", "D 10 30"};
        //String[] matrix = {"A 4 10", "B 10 3", "C 3 12", "D 12 20", "E 20 7"};
        //String[] matrix = {"A 2 84","B 84 66","C 66 8","D 8 410","E 410 8","F 8 96","G 96 10","H 10 200","I 200 10","J 10 2"};
        //String[] matrix = {"3","A 1 5", "B 5 20", "C 20 1"};
        //assignTable(matrix);
        /*Scanner sc = new Scanner(System.in);
        int mc = sc.nextInt();
        while(mc!=0){
            String[] str = new String[mc+1];
            str[0] = mc + "";
            for(int i = 1 ; i <= mc ; i++){
                str[i] = "A" + i + " " + sc.nextInt() + " " + sc.nextInt();
            }
            assignTable(str);
            mc = sc.nextInt();
        }*/
        //assignTable(matrix);
        
    }
}