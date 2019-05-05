#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {

	int nCtr, temp;
	scanf("%d",&nCtr);
	for(int i = 0; i < nCtr; i++) {
		scanf("%d", &temp);
		if(temp!=0){
			printf("HARD");
			return 0;
		}
	}
	printf("EASY");
	return 0;
}