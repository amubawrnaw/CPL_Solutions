#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

bitset<2000001> bs;
int pf[2000001];
int nf[2000001];
void sieve(){
	memset(pf, 0, sizeof(pf));
	fill(nf, nf+2000001, 1);
	for(ll i = 2 ; i < bs.size() ; i++){
		if(bs.test(i)){
			for(ll k = i ; k < bs.size() ; k+=i){
				if(k!=i)
					bs.reset(k);
				pf[k]++;
				int temp = k;
				int ctr = 1;
				while(temp%i == 0){
					temp/=i;
					ctr++;
				}
				nf[k]*=ctr;
			}
		}
	}
}

int main() {
	//freopen("out.txt","wt",stdout);
	int in, in2, np;
	bs.set();
	sieve();
	scanf("%d",&in2);
	
	while(in2--){
		scanf("%d",&in);
		printf("%d\n",nf[in] - pf[in]);
	}

	return 0;
}