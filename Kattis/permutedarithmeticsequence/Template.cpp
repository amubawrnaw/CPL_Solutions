#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int arr[100];
int m;

bool isSeq(){
	int incr = arr[1] - arr[0];
	for(int i = 1 ; i < m -1; i++){
		if(arr[i+1] - arr[i] != incr) return false;
	}
	return true;
}


int main() {
	//freopen("out.txt","wt",stdout);
	string line;

	int nCtr;
	scanf("%d",&nCtr);
	for(int i = 0; i < nCtr; i++) {
		scanf("%d", &m);
		for(int k = 0 ; k < m ; k++){
			scanf("%d", &arr[k]);
		}
		if(isSeq()){
			printf("arithmetic\n");
		}else{
			sort(arr, arr+m);
			if(isSeq()){
				printf("permuted arithmetic\n");
			}else{
				printf("non-arithmetic\n");
			}
		}
	}
	return 0;
}