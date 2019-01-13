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

	int n, bcount, money;
	while(scanf("%d",&n) == 1) {
		scanf("%d", &bcount);
		int books[bcount];
		for(int i = 0 ; i < bcount ; i++){
			scanf("%d",&books[i]);
		}
		sort(books, books+bcount);
		//binary search?
		int low = 0, high = bcount-1, mid = (low+high)/2;

		while(low <= high){
			
		}
	}
	fclose(pFile);
	return 0;
}