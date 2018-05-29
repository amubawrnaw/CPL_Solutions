import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        //763 Fibinary Numbers
        
        long fib[] = new long[100];
        fib[0] = 1;
        fib[1] = 2;
        
        for(int i = 2 ; i < 100 ; i++){
            fib[i] = fib[i-1] + fib[i-2];
            //System.out.print(fib[i] + ",");
        }
        
        Scanner sc = new Scanner(System.in);
        
        String in1, in2, ans;
        
        int v1, v2, sum;
        while(sc.hasNextInt()){
            v1 = 0;
            v2 = 0;
            ans = "";
            in1 = sc.nextInt()+"";
            in2 = sc.nextInt()+"";
            
            for(int i = in1.length()-1, j = 0; i >= 0 ;i--, j++){
                if(in1.charAt(i)=='1')
                    v1+=fib[j];
            }
            for(int i = in2.length()-1, j = 0; i >= 0 ;i--, j++){
                if(in2.charAt(i)=='1')
                    v2+=fib[j];
            }
            sum = v1+v2;
            //System.out.println(v1 + " " + v2 + " " + sum);
            for(int i = 0 ; i < 100 ; i++){
                if(fib[i]>sum){
                    for(int k = i-1; k >= 0 ; k--){
                        if(fib[k] > sum){
                            ans+="0";
                        }else{
                            ans+="1";
                            sum-=fib[k];
                        }
                    }
                    if(ans.compareToIgnoreCase("")==0) ans = "0";
                    System.out.println(ans);
                    if(sc.hasNextInt())System.out.println();
                    break;
                }
            }
        }
    }
}
