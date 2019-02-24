#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int lisNLogN(const vi &arr) {
	vi memo;
	for(int i = 0; i < arr.size(); i++) {
		vi::iterator itr = lower_bound(memo.begin(),memo.end(),arr[i]);
		if(itr == memo.end()) {
			memo.push_back(arr[i]);
		} else {
			*itr = arr[i];
		}
	}
	return (int)memo.size();
}

int main() {
	//freopen("out.txt","wt",stdout);
	int nCtr, n,p,q;
	scanf("%d",&nCtr);
	for(int k = 0; k < nCtr; k++) {
		scanf("%d%d%d",&n,&p,&q);
		p++;
		q++;
		int parr[p], qarr[q];
		vector<int> larr;
		for(int i = 0 ; i < p ; i++){
			scanf("%d", &parr[i]);
		}
		for(int i = 0 ; i < q ; i++){
			scanf("%d", &qarr[i]);
		}
		
		for(int i = 0 ; i < p ; i++){
			int *temp;
			temp = find(qarr, qarr + q, parr[i]);
			if(temp!=qarr+q){
				larr.push_back(*temp);
			}
		}
		printf("Case %d: %d\n", k+1, lisNLogN(larr));
	}

	return 0;
}