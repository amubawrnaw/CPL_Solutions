#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	//freopen("out.txt","wt",stdout);
	int arr[]={1,2,6,4,0,0,0,0,0,0};
	int in,l;
	scanf("%d", &l);
	while(l--){
		scanf("%d", &in);
		printf("%d\n", arr[in-1]);
	}
	return 0;
}