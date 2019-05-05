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

	int nCtr, ctr = 0;
	scanf("%d",&nCtr);
	for(int i = 0; i < nCtr; i++) {
		int temp;
		scanf("%d", &temp);
		if(temp<0) ctr++;
	}
	printf("%d", ctr);
	return 0;
}