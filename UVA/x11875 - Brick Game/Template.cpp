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
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	FILE *pFile = fopen("out.txt","w");

	int nCtr;
	scanf("%d",&nCtr);
	int ctr = 1;
	for(int i = 0; i < nCtr; i++) {
		int len;
		scanf("%d",&len);
		vi arr(len);
		int temp;
		for(int k = 0 ; k < len ; k++){
			scanf("%d", &temp);
			arr.push_back(temp);
		}
		sort(arr.begin(), arr.end());
		printf("Case #%d: %d\n",ctr++, arr[len/2]);
	}
	fclose(pFile);
	return 0;
}