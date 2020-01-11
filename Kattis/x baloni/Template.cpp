#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;
int arr[1000001];
int main() {
	//freopen("out.txt","wt",stdout);
	string line;

	int nCtr;
	scanf("%d",&nCtr);
	int ans = 0;
	int curr, temp = 0;
	for(int i = 0; i < nCtr; i++) {
		scanf("%d", &curr);
		arr[curr]++;
	}
	
	printf("%d", ans);
	return 0;
}
