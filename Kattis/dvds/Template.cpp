#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	//freopen("out.txt","wt",stdout);
	string line;

	int nCtr;
	scanf("%d",&nCtr);
	for(int i = 0; i < nCtr; i++) {
		int len;
		int ans = 0;
		scanf("%d", &len);
		int prev = -1, curr;
		
		for(int k = 0 ; k < len ; k++){
			scanf("%d", &curr);
			if(curr < prev){
				ans++;
			}
			prev = curr;
		}
		printf("%d\n", ans);
	}
	return 0;
}