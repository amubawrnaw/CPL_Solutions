#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	//freopen("out.txt","wt",stdout);
	int n,m, cnt;
	while(scanf("%d %d",&n, &m),n&&m) {
		cnt = 0;
		map<int, int> ma;
		int temp;
		while(n--){
			scanf("%d", &temp);
			ma[temp] = 1;
		}
		while(m--){
			scanf("%d",&temp);
			if(ma.count(temp)>0){
				ma[temp]=2;
			}
		}
		for(map<int,int>::iterator itr = ma.begin(); itr!= ma.end() ; itr++){
			if(itr->second==2){
				cnt++;
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
}