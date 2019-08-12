#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

bool cmp(const pair<int,int> &a, const pair<int,int> &b) 
{ 
    return (a.second > b.second); 
} 

int main() {
	//freopen("out.txt","wt",stdout);
	ll kc, fc;
	scanf("%lld %lld", &kc, &fc);
	ll kilos[kc];
	vector<pair<int, int> > pairs;
	for(int i = 0 ; i < kc ; i++){
		scanf("%lld", &kilos[i]);
	}
	sort(kilos, kilos + kc, greater<int>());

	ll temp;
	ll cnt, price;

	for(int i = 0 ; i < fc ; i++){
		scanf("%lld %lld", &cnt, &price);
		pairs.push_back(make_pair(cnt, price));
	}

	sort(pairs.begin(), pairs.end(), cmp);
	ll ctr = 0;
	ll curr = 0 ;
	ll max = 0;
	while(ctr<kc){
		for(int i = 0 ; i < pairs[curr].first && ctr < kc; i++){
			max += kilos[ctr] * pairs[curr].second;
			ctr++;
		}
		curr++;
	}
	printf("%lld", max);
	return 0;
}