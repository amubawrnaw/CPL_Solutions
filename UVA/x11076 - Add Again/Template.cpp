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

	int n;
	while(scanf("%d",&n),n) {
		int arr[n];
		double sum = 0;
		for(int i = 0 ; i < n ; i++){
			scanf("%d", &arr[i]);
		}
		double mult;
		do{
			mult = 1.0;
			for(int k = n-1 ; k >=0 ; k--){
				sum+=arr[k]*mult;
				mult*=10;
			}
		}while(next_permutation(arr, arr + n));
		printf("%ld\n", sum);
	}
	return 0;
}