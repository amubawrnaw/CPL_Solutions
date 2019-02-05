#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	//freopen("out.txt","wt",stdout);
	string name, line;
	int n, g;
	while(scanf("%d%c",&n, &g),n) {
		set<string> s;
		map<string, set<string> > m;
		for(int i = 0; i < n; i++){
			getline(cin,line);
			stringstream ss;
			ss << line;
			ss >> name;
			string food;
			while(ss >> food) {
				s.insert(food);
				m[food].insert(name);
			}
		}

		for(auto s2 : s){
			cout << s2;
			set<string> sss = m[s2];
			for(auto x : sss){
				printf(" %s", x.c_str());
			}
			printf("\n");
		};
		printf("\n");
	}
	return 0;
}