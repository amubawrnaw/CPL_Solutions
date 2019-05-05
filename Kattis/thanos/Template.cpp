#include <stdio.h>

int main() {
	//freopen("out.txt","wt",stdout);

	int nCtr;
	scanf("%d",&nCtr);
	for(long long int i = 0; i < nCtr; i++) {
		long long int x,y,z;
		scanf("%lld %lld %lld", &x, &y, &z);
		long long int years = 0;
		while(true){
			if(x>z){
				printf("%lld\n", years);
				break;
			}
			x*=y;
			years++;
		}
	}
	return 0;
}