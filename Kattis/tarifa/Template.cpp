#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	
	int nCtr, max, curr = 0, temp;
	scanf("%d%d",&max,&nCtr);
	for(int i = 0; i < nCtr; i++) {
		scanf("%d", &temp);
		curr+= max - temp;
	}
	curr+=max;
	printf("%d", curr);
	return 0;
}