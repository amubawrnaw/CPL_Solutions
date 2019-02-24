#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

class Node{
	public:
	Node* left;
	Node* right;
	int val;
	int depth;
};

int main(){
	int tc;
	int temp;
	scanf("%d%d", &tc, &temp);
	Node start;
	start.val = temp;
	start.depth = 0;
	tc--;
	int c = 0;
	printf("0\n");
	while(tc--){
		scanf("%d",&temp);
		Node curr = start;
		while(true){
			if(temp>curr.val){
				//put on right
				if(curr.right!=NULL){
					curr = curr.right;
				}else{
					Node nt;
					nt.depth = curr.depth+1;
					nt.val = temp;
					curr.right = &nt;
					curr = &curr.right;
					c+= curr.depth;
					break;
				}
			}else{
				//put on left
				if(curr.left!=NULL){
					curr = curr.left;
				}else{
					Node nt;
					nt.depth = curr.depth+1;
					nt.val = temp;
					curr.left = &nt;
					curr = &curr.left;
					c+= curr.depth;
					break;
				}
			}
		}
		printf("%d\n",c);
	}
}