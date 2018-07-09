import java.util.LinkedList;
import java.util.Scanner;

public class Main {
    static class Child{
        public Child(int v, int p){
            pos = p;
            val = v;
        }
        int pos;
        int val;
    }
    
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int ccount = sc.nextInt(), candy = sc.nextInt();
        LinkedList<Child> ll = new LinkedList<>();
        while(ccount-->0){
            Child c = new Child(sc.nextInt(), ll.size()+1);
            ll.add(c);
        }
        while(ll.size()!=1){
            if(ll.peekFirst().val>candy){
                Child temp = ll.poll();
                temp.val-=candy;
                ll.add(temp);
            }else ll.poll();
        }
        System.out.println(ll.poll().pos);
    }
}