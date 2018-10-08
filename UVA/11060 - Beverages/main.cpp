#include <cstdio>
#include <vector>
#include <map>
#include <queue>
#include <bitset>
#include <iostream>
using namespace std;
typedef vector<int> vi;

int main(){
	int n;
	int ccount = 1;
	while(scanf("%d", &n) == 1){
		map<string, int> m;
		map<int, string> m_rev;
		int curr = 0;
		for(int i = 0 ; i < n ; i++){
			string line;
			cin >> line;
			m_rev[curr] = line;
			m[line]=curr++;
		}
		vector<vi> al(n, vi());
		vi degree(n,0);
		int e;
		scanf("%d",&e);
		for(int i = 0 ; i < e ;i++){
			string l, r;
			cin >> l >> r;
			int a = m[l], b = m[r];
			al[a].push_back(b);
			degree[b]++;
		}
		priority_queue<int, vi, greater<int> > q;
		bitset<100> visited;

		for(int i = 0 ; i < n ; i++){
			if(degree[i] == 0){
				q.push(i);
			}
		}
		vi ts;
		while(!q.empty()){
			int u = q.top();
			q.pop();
			visited.set(u);
			ts.push_back(u);
			for(int i = 0 ; i < (int) al[u].size() ; i++){
				int v = al[u][i];
				if(!visited[v]){
					degree[v]--;
					if(degree[v] == 0){
						q.push(v);
					}
				}
			}

		}
		printf("Case #%d: Dilbert should drink beverages in this order:",ccount++);
		for(int i = 0 ; i < (int) ts.size() ; i++){
			printf(" %s", m_rev[ts[i]].c_str());
		}
		printf(".\n\n");

	}
}