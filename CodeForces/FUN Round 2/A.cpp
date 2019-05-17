#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	//freopen("out.txt","wt",stdout);
	int n, tc, ds;
	scanf("%d", &tc);
	while(tc--){
		scanf("%d %d", &ds, &n);
		ll ans = 0;
		for(int i = 1 ;i <= n ; i++){
			ans+=i;
		}
		ans+=n;
		printf("%d %d\n", ds, ans);
	}

	return 0;
}