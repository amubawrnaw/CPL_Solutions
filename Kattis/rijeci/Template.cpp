#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	//freopen("out.txt","wt",stdout);
	int A, B, temp;
	A=1;
	B=0;
	int n;
	scanf("%d",&n);
	for(int i = 0 ; i < n ; i++){
		temp = B;
		B+=A;
		A = temp;
	}
	printf("%d %d", A, B);
	return 0;
}