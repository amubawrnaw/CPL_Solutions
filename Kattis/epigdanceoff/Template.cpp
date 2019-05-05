#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	//freopen("out.txt","wt",stdout);
	int n,m;
	scanf("%d %d", &n, &m);
	string arr[n];
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	int ctr = 1;
	for(int i = 0 ; i < m ; i++){
		bool line = true;
		for(int k = 0 ; k < n ; k++){
			if(arr[k][i]=='$'){
				line = false;
				break;
			}
		}
		if(line) ctr++;
	}
	printf("%d", ctr);
}