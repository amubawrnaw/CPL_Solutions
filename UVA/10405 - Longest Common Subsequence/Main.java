import java.util.Scanner;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Student
 */
public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        char[] in1, in2;
        String input, input2;
        while(sc.hasNextLine()){
            input = sc.nextLine();
            input2 = sc.nextLine();
            if(input.length() > 0 && input2.length() > 0){
                in1 = new char[input.length()];
                for(int i = 0 ; i < input.length() ; i++){
                    in1[i] = input.charAt(i);
                }
                
                in2 = new char[input2.length()];
                for(int i = 0 ; i < input2.length() ; i++){
                    in2[i] = input2.charAt(i);
                }
                
                int[][] lookup = new int[in1.length+1][in2.length+1];
                for(int i = 0 ; i < in2.length+1 ; i++){
                    lookup[0][i] = 0;
                }
                for(int i = 0 ; i < in1.length+1 ; i++){
                    lookup[i][1] = 0;
                }

                for(int i = 1 ; i < in1.length+1; i++){
                    for(int k = 1 ; k < in2.length + 1 ;k++){
                        if(in1[i-1] == in2[k-1]){
                            lookup[i][k] = lookup[i-1][k-1]+1;
                        }else{
                            if(lookup[i][k-1]>lookup[i-1][k]){
                                lookup[i][k] = lookup[i][k-1];
                            }else{
                                lookup[i][k] = lookup[i-1][k];
                            }
                        }
                    }
                }

                System.out.println(lookup[in1.length][in2.length]);
            }else{
                System.out.println("0");
            }
            
        }
    }
}