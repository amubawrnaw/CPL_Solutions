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
	int ctr;
	scanf("%d", &ctr);
	while(ctr--){
		cin >> line;
		sort(line.begin(), line.end());
		do{
			printf("%s\n", line.c_str());
		}while(next_permutation(line.begin(), line.end()));
		printf("\n");
	}
	return 0;
}