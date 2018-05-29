import java.util.*;
public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int[] intp, diff;
        int cnt;
        ArrayList<Integer> al = new ArrayList<>();
        while(sc.hasNextInt()){
            cnt = sc.nextInt();
            intp = new int[cnt];
            diff = new int[cnt-1];
            for(int i = 0 ; i < cnt; i++){
            	intp[i] = sc.nextInt();
                if(i!=0){
                	int temp = intp[i] - intp[i-1];
                	if(temp < 0) temp*=-1;
                	diff[i-1] = temp;
                }
            }
            Arrays.sort(diff);
            boolean succ = true;
            for(int i = 0 ; i < cnt -1 ; i++){
            	if(i+1!=cnt-1){
            		if(!(diff[i] == diff[i+1] || (diff[i]+1) == diff[i+1])){
            			succ = false;
            			break;
            		}
            	}
            }
            System.out.println((succ)? "Jolly":"Not jolly");
        }
    }
}