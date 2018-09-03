import java.util.*;
public class Main{

     public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        String in1 = sc.next();
        String in2 = sc.next();
        int carry, ccount;
        
        while(!(in1.equals("0") && in2.equals("0"))){
            carry = 0;
            ccount = 0;
            
            in1 = new StringBuilder(in1).reverse().toString();
            in2 = new StringBuilder(in2).reverse().toString();
            
            char[] t1 = in1.toCharArray();
            char[] t2 = in2.toCharArray();
            
            ArrayList<Integer> ar1 = new ArrayList<>();
            ArrayList<Integer> ar2 = new ArrayList<>();
            
            for(char c : t1){
                ar1.add(Character.getNumericValue(c));
            }
            for(char c : t2){
                ar2.add(Character.getNumericValue(c));
            }
            
            for(int i = 0 ; i < ar1.size() && i < ar2.size() ; i++){
                int i1 = ar1.get(i);
                int i2 = ar2.get(i);
                
                int temp = i1+i2 + carry;
                carry = 0;
                if(temp>=10){
                    ccount++;
                    carry = temp/10;
                }
                if(carry!=0 && ar1.size() <= i+1){
                    ar1.add(carry);
                    carry = 0;
                }
                if(carry!=0 && ar2.size() <= i+1){
                    ar2.add(carry);
                    carry = 0;
                }
            }
            
            if(ccount==0) System.out.println("No carry operation.");
            else if (ccount ==1)System.out.println("1 carry operation.");
            else System.out.println(ccount + " carry operations.");
            
            
            in1 = sc.next();
            in2 = sc.next();
        }
     }
}