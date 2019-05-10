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

	int nCtr, tc;
	scanf("%d",&nCtr);
	for(int i = 0; i < nCtr; i++) {
		scanf("%d", &tc);
		int arr[tc];
		for(int k = 0 ; k < tc ;  k++)
			scanf("%d", &arr[k]);
		printf("Case %d: %d\n", i+1, arr[tc/2]);
	}
	return 0;
}