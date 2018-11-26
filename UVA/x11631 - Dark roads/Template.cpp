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
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	FILE *pFile = fopen("out.txt","w");
	int m,n;
	while(scanf("%d%d",&m,&n),m&&n) {
		vi cost(n);
		map<int, vi> alist; 
		int max = 0;
		for(int i = 0 ; i < n ; i ++){
			int x,y,z;
			scanf("%d%d%d",&x,&y,&z);
			cost.push_back(z);
			alist[x].push_back(y);
			alist[y].push_back(x);
			max+=z;
		}
		int con = 0;
		while(con!=m){
			
		}
	}

	fclose(pFile);
	return 0;
}