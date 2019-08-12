#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	//freopen("out.txt","wt",stdout);
	int heads, kcount;
	while(scanf("%d %d",&heads, &kcount),heads&&kcount) {
		int harr[heads];
		for(int i = 0 ; i < heads ; i++){
			scanf("%d", &harr[i]);
		}
		int karr[kcount];
		for(int i = 0 ; i < kcount ; i++){
			scanf("%d", &karr[i]);
		}
		if(heads>kcount){
			printf("Loowater is doomed!\n");
			continue;
		}
		sort(harr, harr+heads);
		sort(karr, karr+kcount);
		int hedcut = 0;
		int ans = 0;
		bool ded = false;
		for(int i = 0, k = 0 ; i < heads && k < kcount ;i++){
			while(k<kcount){
				if(karr[k] >= harr[i]){
					ans+=karr[k];
					k++;
					hedcut++;
					break;
				}else{
					k++;
				}
			}
		}
		if(hedcut==heads){
			printf("%d\n", ans);
		}else{
			printf("Loowater is doomed!\n");
		}
	}
	return 0;
}