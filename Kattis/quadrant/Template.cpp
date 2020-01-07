#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	//freopen("out.txt","wt",stdout);
	int x,y;
	scanf("%d %d", &x, &y);
	if(x<0){
		if(y<0) printf("3");
		else printf("2");
	}else{
		if(y<0) printf("4");
		else printf("1");
	}
	return 0;
}
