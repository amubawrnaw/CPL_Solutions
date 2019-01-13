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
#include <regex>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	FILE *pFile = fopen("out.txt","w");

	int nCtr, garb;
	regex r("( {2,})");
	scanf("%d",&nCtr);
	for(int i = 0; i < nCtr; i++) {
		int lcount;
		string line, ans = "";
		scanf("%d%c", &lcount,&garb);
		while(lcount--){
			getline(cin,line);
			ans.append(line);
			ans.append("\n");
		}
		regex_replace(ans,r," ");
		printf("Case %d:\n", i+1);
		cout << ans << "\n";
	}

	fclose(pFile);
	return 0;
}