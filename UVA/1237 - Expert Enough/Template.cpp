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
	vi minp, maxp;
	vector<string> names;
	string temp;
	int nCtr, garb, intc, outc, in, min, max;
	scanf("%d",&nCtr);
	for(int i = 0; i < nCtr; i++) {
		if(i!=0) cout << "\n";
		minp.clear();
		maxp.clear();
		names.clear();
		scanf("%d%c", &intc, &garb);
		while(intc--){
			cin >> temp;
			scanf("%d %d", &min, &max);
			minp.push_back(min);
			maxp.push_back(max);
			names.push_back(temp);
		}
		scanf("%d", &outc);
		bool found = false;
		string out;
		while(outc--){
			found = false;
			out = "UNDETERMINED";
			scanf("%d", &in);
			for(int i = 0 ; i < minp.size() ; i++){
				if(in >= minp[i] && in <= maxp[i]){
					if(!found){
						found = true;
						out = names[i];
					}else{
						found = false;
						out = "UNDETERMINED";
						break;
					}
				}
			}
			cout << out << "\n";
		}
	}
	fclose(pFile);
	return 0;
}