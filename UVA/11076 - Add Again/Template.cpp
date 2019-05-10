#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	freopen("out.txt","wt",stdout);
	string line;

	int n;
	while(scanf("%d",&n),n) {
		set<int> s;
		ll mult = 1;
		int arr[n];
		int temp;
		ll sum = 0;
		for(int i = 0 , k = n-1; i < n ; i++, k--){
			scanf("%d", &temp);
			s.insert(temp);
		}
		vector<int> v(s.begin(), s.end());
		for(int i = 0 ; i < s.size() ; i++){
			sum+= v[i];
			if(i>1)
				mult*=i;
		}
		

		ll ans = 0;
		sum*=mult;
		mult = 1;
		for(int i = 0 ; i < n ; i++){
			ans+=sum*mult;
			mult*=10;
		}
		printf("%lld\n", ans);

	}
	return 0;
}