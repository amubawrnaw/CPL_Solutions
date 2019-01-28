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

	int nCtr, temp, trash;
	scanf("%d",&nCtr);
	ll sum=0;
	for(int i = 0; i < nCtr; i++) {
		
		cin >> line;
		if(line.compare("donate") == 0){
			scanf("%d%c", &temp, &trash);
			sum+=temp;
		}else{
			printf("%lld\n", sum);
		}
	}
	return 0;
}