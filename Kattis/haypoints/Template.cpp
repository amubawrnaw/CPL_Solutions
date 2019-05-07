#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	//freopen("out.txt","wt",stdout);
	int j,n, trash;
	scanf("%d %d", &j, &n);
	scanf("%c", &trash);
	int pay;
	string line;
	map<string, int> m;
	while(j--){
		cin >> line >> pay;
		m[line] = pay;
	} 
	int sum;
	while(n--){
		sum = 0;
		while(cin>>line, line.compare(".")!=0){
			sum+=m[line];
		}
		printf("%d\n", sum);
	}
	return 0;
}