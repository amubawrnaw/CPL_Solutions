#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;
bitset<1001> bs;
int main() {
	//freopen("out.txt","wt",stdout);
	int nctr;
	scanf("%d", &nctr);
	while(nctr--){
		int m,n;
		scanf("%d %d", &m, &n);
		vector<vi> adjlist(m);
		int t1,t2;
		while(n--){
			scanf("%d %d", &t1, &t2);
			adjlist[t1].push_back(t2);
			adjlist[t2].push_back(t1);
		}
		int cc = 0;
		queue<int> q;
		bs.reset();
		for(int i = 0 ; i < m ; i++){
			if(!bs.test(i)){
				cc++;
				q.push(i);
				while(!q.empty()){
					int x = q.front();q.pop();
					bs.set(x);
					for(int i = 0 ; i < adjlist[x].size() ; i++){
						if(!bs.test(adjlist[x][i])) q.push(adjlist[x][i]);
					}
				}
			}
		}
		printf("%d\n", cc-1);
	}
	return 0;
}