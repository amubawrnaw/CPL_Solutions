#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	//freopen("out.txt","wt",stdout);
	int n;
	while(scanf("%d",&n),n) {
		int sqr = (int)ceil(sqrt(n));
		ll max = sqr*sqr;
		ll min = (sqr-1)*(sqr-1) + 1;
		ll mid = (max + min)/2;
		//printf("N: %d MAX: %d MIN: %d MID: %d\n",n,max,min,mid);
		if(sqr%2==0){
			if(n>mid){
				printf("%d %d\n", sqr, max+1-n);
			}else if (n<mid){
				printf("%d %d\n", n+1 - min,sqr);
			}else{
				printf("%d %d\n", sqr, sqr);
			}
		}else{
			if(n<mid){
				printf("%d %d\n", sqr, n+1 - min);
			}else if (n>mid){
				printf("%d %d\n", max + 1 - n, sqr);
			}else{
				printf("%d %d\n", sqr, sqr);
			}
		}

	}
	return 0;
}