#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	//freopen("out.txt","wt",stdout);
	int n, cmp, temp, cnum = 1;
	while(scanf("%d",&n)==1) {
		printf("Case %d:\n", cnum);
		int arr[n];
		for(int i = 0 ; i < n ; i++){
			scanf("%d", &arr[i]);
		}
		scanf("%d", &temp);
		for(int i = 0 ; i < temp ; i++){
			int absm = 99999999;
			int ans = 0;
			scanf("%d", &cmp);
			for(int k = 0 ; k < n - 1; k++){
				for(int p = k+1 ; p<n ; p++){
					if(abs((arr[k]+arr[p])-cmp)<absm){
						absm = abs((arr[k]+arr[p])-cmp);
						ans = (arr[k]+arr[p]);
					}
				}
			}
			printf("Closest sum to %d is %d.\n", cmp, ans);
		}
		cnum++;
	}
	return 0;
}