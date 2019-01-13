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
	map<char, int> m;
	char c, garb;
	string line;
	int temp;
	int nCtr, mc;
	scanf("%d",&nCtr);
	int sum;
	for(int i = 0; i < nCtr; i++) {
		sum = 0;
		m.clear();
		scanf("%d", &mc);
		while(mc--){
			scanf(" %c %d", &c, &temp, &garb);
			m[c] = temp;
		}
		scanf("%d%c", &temp, &garb);
		while(temp--){
			getline(cin, line);
			for(int k = 0 ; k < line.length() ; k ++){
				if(m.count(line[k])>0){
					sum+=m[line[k]];
				}
			}
		}
		printf("%d.%d%d$\n", sum/100,(sum%100)/10, (sum%100)%10);
	}

	return 0;
}