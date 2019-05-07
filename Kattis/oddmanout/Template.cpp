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
	map<int, bool> m;
	int nCtr, size, in;
	scanf("%d",&nCtr);
	for(int i = 0; i < nCtr; i++) {
		m.clear();
		scanf("%d", &size);
		while(size--){
			scanf("%d", &in);
			m[in] = !m[in];
		}

		for(map<int, bool>::iterator itr= m.begin(); itr != m.end(); itr++){
			if(itr->second) printf("Case #%d: %d\n", i+1, itr->first);
		}
	}
	return 0;
}