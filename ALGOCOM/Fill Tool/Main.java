import java.util.*;
public class Main{
	char[][] map; 
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
        
        int x = sc.nextInt(), y = sc.nextInt();
        char[][] fill = new char[y][x];
        String temp;
        for(int k = 0 ; k < y ; k++){
            temp = sc.next();
            for(int i = 0 ; i < x ; i++){
                fill[k][i] = temp.charAt(i);
            }
        }
        
        int x2 = sc.nextInt(), y2 = sc.nextInt();
        char target = sc.next().charAt(0);
        
        
        
        
        
        
        String sb = "";
        for(int k = 0 ; k < y ; k++){
            for(int i = 0 ; i < x ; i++){
                sb+= fill[k][i];
            }
            sb+="\n";
        }
        System.out.println(sb);
	}

}