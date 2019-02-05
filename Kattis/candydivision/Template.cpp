#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef pair<int,ii> iii;

int main() {
	// freopen("in.txt","rt",stdin);
	// freopen("out.txt","wt",stdout);
	ll n;
	scanf("%lld", &n);
	set<ll> s;
	for(ll i = 1 ; i * i <= n ; i++){
		if(n%i==0){
			s.insert(i-1);
			s.insert((n/i)-1);
		}
	}
	for(auto &x : s){
		printf("%lld%s", x, x == n - 1 ? "\n" : " ");
	}
}