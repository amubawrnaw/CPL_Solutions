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

	int nCtr, p, bowl, cnt2, totw, eggcount, n;
	scanf("%d",&nCtr);
	for(int i = 0; i < nCtr; i++) {
		eggcount = 0;
		totw = 0;
		scanf("%d %d %d", &cnt2, &p, &bowl);
		while(cnt2-->0){
			scanf("%d",&n);
			if(eggcount+1 <= p && totw+n <= bowl){
				totw+=n;
				eggcount++;
			}
		}
		printf("Case %d: %d\n", i+1, eggcount);
	}
	return 0;
}