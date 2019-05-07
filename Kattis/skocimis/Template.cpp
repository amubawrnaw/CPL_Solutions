#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	//freopen("out.txt","wt",stdout);
	int x,y,z;
	scanf("%d %d %d", &x, &y, &z);
	printf("%d", max(y-x-1, z-y-1));
	return 0;
}