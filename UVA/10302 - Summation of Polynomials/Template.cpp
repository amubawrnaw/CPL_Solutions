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
	long long int ans;
	int n, in;
	while(scanf("%d",&n) == 1) {
		ans = 1;
		for(long long int i = 2 ; i <= n ; i++){
			ans+= (i*i*i);
		}
		printf("%lld\n",ans);
	}

	fclose(pFile);
	return 0;
}