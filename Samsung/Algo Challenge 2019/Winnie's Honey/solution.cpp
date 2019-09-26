#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	//freopen("out.txt","wt",stdout);
	int nl, ll;
	scanf("%d %d", &nl, &ll);
	map<string, int> m;
	string temp;
	int ans = 0;
	for(int i = 0 ; i < nl ; i++){
		cin >> temp; 
		m[temp] = 1;
	}
	for(int i = 0 ; i < ll ; i++){
		cin >> temp;
		ans+=m[temp];
	}
	printf("%d", ans);


	return 0;
}