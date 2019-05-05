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
	int cmp[]={1,1,2,2,2,8};
	int temp;
	for(int i = 0; i < 6; i++) {
		scanf("%d", &temp);
		printf("%d ", cmp[i] - temp);
	}
	return 0;
}