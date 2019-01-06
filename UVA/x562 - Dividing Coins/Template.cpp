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

	int nCtr, as;
	scanf("%d",&nCtr);
	for(int i = 0; i < nCtr; i++) {
		scanf("%d", &as);
		int arr[as];
		int max = 0;
		for(int i = 0 ; i < as ; i++){
			scanf("%d", &arr[i]);
			max+= arr[i];
		}
		sort(arr,arr+as);
		int sum = 0;
		int i = 0;
		while(sum<max/2){
			sum+=arr[i];
			i++;
		}
		if(sum>max) sum-=arr[0];
		fprintf(pFile,"%d\n", abs(sum-(max/2)));
	}
	return 0;
}