import java.util.ArrayList;
import java.util.Scanner;
import java.util.Stack;

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
        ArrayList<String> al1, al2;
        String input;
        int[][] lookup;
        char[][] dir;
        while(sc.hasNext()){
            al1 = new ArrayList<>();
            al2 = new ArrayList<>();
            
            while(true){
                input = sc.next();
                if(input.equals("#"))break;
                al1.add(input);
            }
            while(true){
                input = sc.next();
                if(input.equals("#"))break;
                al2.add(input);
            }
            lookup = new int[al1.size()+1][al2.size()+1];
            dir = new char[al1.size()+1][al2.size()+1];
            for(int i = 0 ; i < al2.size()+1 ; i++){
                lookup[0][i] = 0;
                dir[0][i] = 'k';
            }
            for(int i = 0 ; i < al1.size()+1 ; i++){
                lookup[i][0] = 0;
                dir[i][0] = 'i';
            }
            for(int i = 1 ; i < al1.size()+1; i++){
                for(int k = 1 ; k < al2.size() + 1 ;k++){
                    if(al1.get(i-1).equals(al2.get(k-1))){
                        lookup[i][k] = lookup[i-1][k-1]+1;
                        dir[i][k] = 'd';
                    }else{
                        if(lookup[i][k-1]>lookup[i-1][k]){
                            lookup[i][k] = lookup[i][k-1];
                            dir[i][k] = 'k';
                        }else{
                            lookup[i][k] = lookup[i-1][k];
                            dir[i][k] = 'i';
                        }
                    }
                }
            }
            int i = al1.size();
            int k = al2.size();
            Stack<String> s = new Stack<>();
            String ans = "";
            while(i!=0&&k!=0){
                if(dir[i][k]=='d'){
                    s.push(al1.get(i-1));
                    i--;
                    k--;
                }else if(dir[i][k]=='k'){
                    k--;
                }else if(dir[i][k]=='i'){
                    i--;
                }
            }
            while(!s.isEmpty()){
                ans+= s.pop() + " ";
            }
            String an2 = "";
            System.out.println(ans.trim());
        }
    }
}