#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	//freopen("out.txt","wt",stdout);
	int nCtr;
	scanf("%lld",&nCtr);
	ll arr[nCtr];
	for(int i = 0; i < nCtr; i++) {
		scanf("%lld", &arr[i]);
	}
	sort(arr, arr+nCtr, greater<ll>());
	ll disc = 0;
	for(int i = 2 ; i < nCtr ; i+=3){
		disc += arr[i];
	}
	printf("%lld", disc);
	return 0;
}