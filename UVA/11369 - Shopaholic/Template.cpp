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

	int nCtr, tc;
	scanf("%d",&nCtr);
	for(int i = 0; i < nCtr; i++) {
		scanf("%d", &tc);
		int arr[tc];
		for(int k = 0 ; k < tc ; k++ ){
			scanf("%d", &arr[k]);
		}
		sort(arr, arr+tc);
		int max = 0;
		int e;
		if(tc>=3){
			for(e = tc-1 ; e-2 >= 0 ;e-=3){
				max+= arr[e-2];
			}
		}
		printf("%d\n",max);
		
	}
	fclose(pFile);
	return 0;
}