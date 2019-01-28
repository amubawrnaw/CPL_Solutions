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
	string line;

	int nCtr, len1, len2;
	scanf("%d",&nCtr);
	for(int i = 0 ; i < nCtr ; i++){
		scanf("%d %d", &len1, &len2 );
		
		map<int, int> m; 
		int temp;
		for(int k = 0 ; k < len1 ; k++){
			scanf("%d", &temp);
			if(m.count(temp)>0){
				m[temp]++;
			}else{
				m[temp] = 1;
			}
		}

		for(int k = 0 ; k < len2 ; k++){
			scanf("%d", &temp);
			if(m.count(temp)>0){
				m[temp]--;
			}else{
				m[temp] = -1;
			}
		}

		int ans = 0;
		for(map<int,int>::iterator i = m.begin(), end = m.end(); i!=end; ++i){
			if(i->second != 0){
				ans+= abs(i->second);
			}
		} 
		printf("%d\n", ans);
	}	

	fclose(pFile);
	return 0;
}