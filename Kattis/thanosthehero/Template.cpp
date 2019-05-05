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
	int arr[nCtr];
	for(int i = nCtr-1; i >= 0; i--) {
		scanf("%d", &arr[i]);
	}
	long long int count = 0;
	for(int i = 0 ; i < nCtr - 1; i++){
		if(arr[i+1] >= arr[i]){
			if(arr[i] == 0){
				count = 1;
				break;
			}
			int newval = arr[i+1] - arr[i] + 1;
			// /printf("%d - %d = %d\n", arr[i+1], newval, arr[i+1] - newval);
			count += newval;
			arr[i+1] -= newval;
		}
	}
	printf("%lld", count);
	return 0;
}