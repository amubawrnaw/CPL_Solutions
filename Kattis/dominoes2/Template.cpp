#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;
bitset<10001> doms;
int main() {
	int tc, n,m,l, s,dest, z, ans, curr;
	scanf("%d", &tc);
	while(tc--){
		ans = 0;
		doms.reset();
		scanf("%d %d %d", &n,&m,&l);
		vector<int> d[n+1];
		while(m--){
			scanf("%d %d", &s, &dest);
			d[s].push_back(dest);
		}
		while(l--){
			stack<int> q;
			scanf("%d", &z);
			if(!doms.test(z))
				ans++;
			doms.set(z);
			if(d[z].size() != 0){
				for(int i = 0 ; i < d[z].size() ; i++)
					q.push(d[z][i]);
			}
			while(!q.empty()){
				curr = q.top(); q.pop();
				if(!doms.test(curr)){
					for(int i = 0 ; i < d[curr].size() ; i++)
						q.push(d[curr][i]);
					doms.set(curr);
					ans++;
				}
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}