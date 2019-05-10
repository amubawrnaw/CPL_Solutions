#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	//freopen("out.txt","wt",stdout);
	string line;
	map<string, int> m;
	while(getline(cin, line), line.compare("***")!=0){
		m[line]++;
	}
	bool samemax = false;
	int max = 0;
	string smax;
	for(map<string, int>::iterator itr = m.begin() ; itr!= m.end() ; itr++){
		if(max == itr->second){
			samemax = true;
		}else if(max < itr->second){
			samemax = false;
			max = itr->second;
			smax = itr->first;
		}
	}
	if(samemax)printf("Runoff!");
	else cout << smax;
	return 0;
}