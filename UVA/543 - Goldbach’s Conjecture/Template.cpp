#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;
bitset<1000001> bs;

void sieve(){
	for(ll i = 2 ; i < bs.size() ; i++){
		if(bs.test(i)){
			for(ll k = i*i ; k < bs.size() ; k+=i){
				bs.reset(k);
			}
		}
	}
}
int main() {
	//freopen("out.txt","wt",stdout);
	int in;
	bs.set();
	sieve();
	while(scanf("%d",&in),in) {
		bool enter = false;
		for(int i = 2 ; i < in; i++){
			enter = false;
			if(bs.test(i)&&bs.test(in-i)){
				printf("%d = %d + %d\n", in, i, in-i);
				enter = true;
				break;
			}
		}
		if(!enter) printf("Goldbach's conjecture is wrong.\n");
	}
	return 0;
}