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
	int arr[nCtr];
	for(int i = 0; i < nCtr; i++) {
		scanf("%d", &arr[i]);
	}
	int ind;
	for(int i = 6 ; i >= 1 ; i--){
		ind = 0;
		for(int k = 0 ; k < nCtr ; k++){
			if(arr[k]==i){
				if(ind == 0){
					ind = k+1;
				}else{
					ind = 0;
					break;
				}
			}
		}
		if(ind != 0){
			printf("%d", ind);
			goto end;
		}
	}
	printf("none");
	end:;
	return 0;
}
