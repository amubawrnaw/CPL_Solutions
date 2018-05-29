import java.util.Scanner;

/**
 *
 * @author Student
 */
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int[][] result;
        int height, width;
        String ans;
        String inp;
        int count = 1;
        while(true){
            height= sc.nextInt();
            width = sc.nextInt();
            sc.nextLine();
            ans = "\n";
            if(height == 0 && width == 0) break;
            
            result = new int[height][width];
            for(int i = 0 ; i < height ; i++){
                inp = sc.nextLine();
                for(int j = 0 ; j < width ; j++){
                    char c = inp.charAt(j);
                    if(c == '*') result[i][j] = 99999;
                    else result[i][j] = 0;
                }
            }
            for(int i = 0 ; i < height ; i++){
                for(int j = 0 ; j < width ; j++){
                    if(result[i][j] == 99999){
                        Main.bomb(result, i, j,height, width);
                    }
                }
            }
            for(int i = 0 ; i < height ; i++){
                for(int j = 0 ; j < width ; j++){
                    if(result[i][j] == 99999) ans+="*";
                    else ans+=(result[i][j]);
                }
                ans+="\n";
            }
            if(count!=1) System.out.println();
            System.out.print("Field #" + count + ":" + ans);
            count++;
        }
    }
    public static void bomb(int[][] b, int x, int y, int h, int w){
        if(x-1 >= 0){
            if(b[x-1][y]!= 99999)b[x-1][y]+=1;
            if(y-1>=0&& b[x-1][y-1]!= 99999) b[x-1][y-1]+=1;
            if(y+1<w&& b[x-1][y+1]!= 99999) b[x-1][y+1]+=1;
        }
        if(x+1 < h){
            if(b[x+1][y]!= 99999)b[x+1][y]+=1;
            if(y-1>=0 && b[x+1][y-1]!= 99999) b[x+1][y-1]+=1;
            if(y+1<w && b[x+1][y+1]!= 99999) b[x+1][y+1]+=1;
        }
        if(y+1<w && b[x][y+1]!= 99999) b[x][y+1]+=1;
        if(y-1>=0 && b[x][y-1]!= 99999) b[x][y-1]+=1;
    }
}