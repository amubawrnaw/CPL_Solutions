#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	//freopen("out.txt","wt",stdout);
	int cnt = 0, a,b;
	scanf("%d %d", &a, &b);
	while(a<=b){
		a*=3;
		b*=2;
		cnt++;
	}
	printf("%d", cnt);
	return 0;
}