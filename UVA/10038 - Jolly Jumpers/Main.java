import java.util.*;
public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int[] intp;
        int cnt;
        ArrayList<Integer> diff;
        while(sc.hasNextInt()){
            cnt = sc.nextInt();
            intp = new int[cnt];
            diff = new ArrayList<>();

            for(int i = 0 ; i < cnt; i++){
            	intp[i] = sc.nextInt();
                if(i!=0){
                	int temp = intp[i] - intp[i-1];
                	if(temp < 0) temp*=-1;
                	diff.add(temp);
                }
            }
            boolean succ = true;

            for(int i = 1 ; i < cnt ; i++){
                if(!diff.contains(i)){
                    succ = false;
                    break;
                }
            }
            System.out.println((succ)? "Jolly":"Not jolly");
        }
    }
}