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

	int n;
	while(scanf("%d",&n) == 1) {
		if(n<0) break;
		//stolened formula
		double ans = n*(n+1)/2+1;
		printf("%.0f\n",ans);
	}
	return 0;
}