#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	//freopen("out.txt","wt",stdout);
	int m, q, cc = 1, h,l,mid, qnum, ans;
	while(scanf("%d %d", &m, &q), m&&q){
		printf("CASE# %d:\n",cc++);
		int marr[m];
		for(int i = 0 ; i < m ; i++){
			scanf("%d", &marr[i]);
		}
		sort(marr, marr+m);
		for(int i = 0 ; i < q ; i++){
			scanf("%d", &qnum);
			bool found = false;
			for(int k = 0 ; k < m ; k++){
				if(marr[k] == qnum){
					ans = k+1;
					found = true;
					break;
				}
			}
			if(found){
				printf("%d found at %d\n", qnum, ans);
			}else{
				printf("%d not found\n", qnum);
			}
		}
		

		/*for(int i = 0 ; i < q ; i++){
			scanf("%d", &qnum);
			h = m-1;
			l = 0;
			bool found = false;
			while(l<=h){
				mid = (h+l)/2;
				if(qnum == marr[mid]){
					found = true;
					break;
				}else if(qnum<marr[mid]){
					h = mid-1;
				}else{
					l=mid+1;
				}
			}
			if(found){
				printf("%d found at %d\n", qnum, mid+1);
			}else{
				printf("%d not found\n", qnum);
			}
		}*/
	}
	return 0;
}