#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	int p, ind, e;
	scanf("%d %d", &p, &ind);
	vector<int> arr;
	for(int i = 0 ; i < p ; i++){
		scanf("%d", &e);
		arr.push_back(e);
	}
	int ans = arr[ind];
	arr.erase(arr.begin() + ind);
	bool solved = false;
	int sc = 1;
	while(ans<300){
		solved = true;
	}
	if(!solved&&ans!=300){
		printf("0 0");
	}else{

	}
}
