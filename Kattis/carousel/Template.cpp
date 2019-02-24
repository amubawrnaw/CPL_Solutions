#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m,a,b,currA,currB;
	float ans;
	while(scanf("%d %d", &n,&m), n!=0 && m!=0){
		ans = 0;
		currA = -1;
		currB = -1;
		for(int i = 0 ; i < n ; i++){
			scanf("%d %d", &a, &b);
			if(a<=m){
				if(ans<a*1.0/b*1.0){
					currA = a;
					currB = b;
					ans = a*1.0/b*1.0;
				}else if(ans == a*1.0/b*1.0){
					if(a > currA){
						currA = a;
						currB = b;
					}
				}
			}
		}
		if(currA == -1){
			printf("No suitable tickets offered\n");
		}else{
			printf("Buy %d tickets for $%d\n", currA, currB);
		}
		
	}
}
