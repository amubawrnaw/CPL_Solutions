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
		int tc;
		scanf("%d", &tc);
		int arr[tc];
		for(int k = 0 ; k < tc ; k++){
			scanf("%d", &arr[k]);
		}
		int ans = 0, min = arr[tc-1];
		for(int k = tc-1 ; k >= 0 ; k--){
			if(min<arr[k]) ans++;
			if(min>arr[k]) min = arr[k];
		}
		printf("%d\n", ans);
	}
	return 0;
}