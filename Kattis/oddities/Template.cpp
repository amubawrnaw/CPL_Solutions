#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	int nCtr, temp;
	scanf("%d",&nCtr);
	for(int i = 0; i < nCtr; i++) {
		scanf("%d", &temp);
		printf("%d is %s\n", temp, (temp%2==0?"even":"odd"));
	}
	return 0;
}