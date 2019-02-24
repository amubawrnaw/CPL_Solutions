import java.util.*;
class Node{
	public Node left;
	public Node right;
	public int val;
	public int depth;
}
public class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int tc = sc.nextInt();
		Node start = new Node();
		int temp = sc.nextInt();
		start.val = temp;
		start.depth = 0;
		tc--;
		int c = 0;
		System.out.println("0");
		while(tc-->0){
			temp = sc.nextInt();
			Node curr = start;
			while(true){
				if(temp>curr.val){
					//put on right
					if(curr.right!=null){
						curr = curr.right;
					}else{
						Node nt = new Node();
						nt.depth = curr.depth+1;
						nt.val = temp;
						curr.right = nt;
						curr = curr.right;
						c+= curr.depth;
						break;
					}
				}else{
					//put on left
					if(curr.left!=null){
						curr = curr.left;
					}else{
						Node nt = new Node();
						nt.depth = curr.depth+1;
						nt.val = temp;
						curr.left = nt;
						curr = curr.left;
						c+= curr.depth;
						break;
					}
				}
			}
			System.out.println(c);
		}

		
	}
}
