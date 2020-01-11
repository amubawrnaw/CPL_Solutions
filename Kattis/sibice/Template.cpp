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

	int nCtr, l, w, h, temp;
	scanf("%d %d %d",&nCtr, &l, &w);
	h = hypot(l,w);
	for(int i = 0; i < nCtr; i++) {
		scanf("%d", &temp);
		if(temp<=h || temp <= l || temp<= w){
			printf("DA\n");
		}else{
			printf("NE\n");
		}
	}
	return 0;
}
