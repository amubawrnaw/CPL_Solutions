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
	cin >> line;
	while(line.compare("#")!=0){
		int temp = next_permutation(line.begin(), line.end());
		if(temp == 0) printf("No Successor\n");
		else cout << line << "\n";

		cin >> line;
	}
	return 0;
}