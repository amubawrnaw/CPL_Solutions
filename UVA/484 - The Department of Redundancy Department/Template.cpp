#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	//freopen("out.txt","wt",stdout);
	map<int, int> m;
	vector<int> arr;
	int n;
	while(scanf("%d",&n) == 1) {
		if(m.count(n)>0){
			m[n]++;
		}else{
			m[n] = 1;
			arr.push_back(n);
		}
	}
	for(int i = 0 ; i < arr.size() ; i++){
		printf("%d %d\n", arr[i], m[arr[i]]);
	}
	return 0;
}