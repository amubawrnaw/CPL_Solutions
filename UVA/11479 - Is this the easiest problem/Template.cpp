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

	int nCtr;
	scanf("%d",&nCtr);
	for(int i = 0; i < nCtr; i++) {
		ll arr[3];
		scanf("%lld %lld %lld", &arr[0], &arr[1], &arr[2]);
		sort(arr, arr+3);

		if(arr[0] + arr[1] > arr[2]){
			if(arr[0] == arr[1] && arr[2] == arr[1]){
				printf("Case %d: Equilateral\n", i+1);
			}else if(arr[0]!= arr[1] && arr[1]!=arr[2] && arr[2]!=arr[0]){
				printf("Case %d: Scalene\n", i+1);
			}else{
				printf("Case %d: Isosceles\n", i+1);
			}
		}else{
			printf("Case %d: Invalid\n", i+1);
		}
	}
	return 0;
}