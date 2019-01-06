#include <cstdio>
#include <cmath>
#include <cstring>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>
#include <queue>
#include <bitset>
#include <map>
#include <stack>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	FILE *pFile = fopen("out.txt","w");
	float nf, nc;
	int nCtr,c,f;
	scanf("%d",&nCtr);
	for(int i = 0; i < nCtr; i++) {
		scanf("%d %d", &c, &f);
		//convert C to F
		nc = ((c*9.0)/5.0)+32;

		//add the 2
		nf = f + nc;

		//convert the sum back to C
		nf = ((nf-32) * 5.0)/9.0;

		printf("Case %d: %.2f\n",i+1, nf);
	}
	return 0;
}