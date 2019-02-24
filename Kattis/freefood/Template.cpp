#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

bitset<366> bs;

int main() {
	//freopen("out.txt","wt",stdout);
	string line;

	int nCtr, s, t;
	scanf("%d",&nCtr);
	bs.reset();
	for(int i = 0; i < nCtr; i++) {
		scanf("%d %d", &s, &t);
		for(int k = s ; s <= t ; s++){
			bs.set(s);
		}
	}
	int ans = 0;
	for(int i = 0 ; i < bs.size() ; i++){
		if(bs.test(i)) ans++;
	}
	printf("%d", ans);
	return 0;
}