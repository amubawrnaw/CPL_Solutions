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

	int nCtr, trash;
	scanf("%d\n",&nCtr);
	//cin >> line;
	for(int i = 0; i < nCtr; i++) {
		getline(cin, line);
		string sub = line.substr(0,11);
		if(sub.compare("simon says ") == 0){
			cout << line.substr(11);
		}
		printf("\n");
		
	}
	return 0;
}