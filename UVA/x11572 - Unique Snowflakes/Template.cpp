#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	freopen("out.txt","wt",stdout);
	set<int> s;
	int nCtr;
	scanf("%d",&nCtr);
	for(int i = 0; i < nCtr; i++) {
		int tc;
		s.clear();
		scanf("%d", &tc);
		while(tc--){
			int temp;
			scanf("%d", &temp);
			s.insert(temp);
		}
		printf("%d\n", s.size());
	}

	return 0;
}