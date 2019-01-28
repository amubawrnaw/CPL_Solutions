#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	FILE *pFile = fopen("out.txt","w");
	string line;
	int n;
	while(scanf("%d",&n),n) {
		int temp;
		int max = -9;
		int i;
		bool clear = true;
		for(i = 0 ; i < n ; i++){
			scanf("%d", &temp);
			if(max <= temp) {
				max = temp;
			}else{
				clear = false;
			}
		}
		if(clear) fprintf(pFile,"Possible\n");
		else fprintf(pFile,"Not possible\n");
	}	

	fclose(pFile);
	return 0;
}