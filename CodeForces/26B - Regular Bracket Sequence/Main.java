import java.util.*;

public class Main{

	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
                int cnt = 0, pc = 0, bc = 0;
		ArrayList<Integer> s = new ArrayList<>();
                StringBuilder sb = new StringBuilder(sc.next());
                for(int i = 0 ; i < sb.length() ; i++){
                    char c = sb.charAt(i);
                    if(c == '(') pc++;
                    else if(c == ')'){
                        if(pc!=0) {pc--;cnt+=2;}
                    }else if (c == '[') bc++;
                    else{
                        if(bc!=0) {bc--; cnt+=2;}
                    }
                }
                System.out.println(cnt);
	}
}