#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	//freopen("out.txt","wt",stdout);
	string line;

	int nCtr;
	int op, id;
	char pos, trash;
	int ctr;
	scanf("%d",&nCtr);
	for(int i = 0; i < nCtr; i++) {
		deque<int> dq;
		printf("Case %d:\n", i+1);
		scanf("%d", &ctr);
		while(ctr--){
			scanf("%d", &op); 
			
			
			if(op == 1){
				scanf(" %c %d", &pos, &id);
				if(pos == 'B') dq.push_back(id);
				else dq.push_front(id);
			}else if(op == 2){
				scanf(" %c", &pos);
				if(pos == 'B') dq.pop_back();
				else dq.pop_front();
			}else{
				scanf(" %c %d", &pos, &id);
				if(pos == 'D'){
					printf("%d\n", dq[id-1]);
				}else{
					printf("%d\n", distance(dq.begin(), find(dq.begin(), dq.end(), id)) + 1);
				}
			}
		}
	}

	return 0;
}