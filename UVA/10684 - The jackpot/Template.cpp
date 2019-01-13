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
	while(scanf("%d",&n),n) {
		int arr[n];
		for(int i = 0 ; i < n ; i++){
			scanf("%d", &arr[i]);
		}
		int curr = 0;
		int max_streak = -9999999;
		for(int i = 0 ; i < n ; i++){
			curr+=arr[i];
			if(curr<0) curr = 0;
			max_streak = max(curr,max_streak);
		}
		if(max_streak > 0) printf("The maximum winning streak is %d.\n", max_streak);
		else printf("Losing streak.\n");
	}

	fclose(pFile);
	return 0;
}