#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	//freopen("out.txt","wt",stdout);
	int nCtr;
	scanf("%d",&nCtr);
	for(int ctr = 0; ctr < nCtr; ctr++) {
		unordered_map<int, int> m;
		int max = 0;
		int tc;
		scanf("%d",&tc);
		int arr[tc];
		for(int i = 0 ; i < tc ; i++){
			scanf("%d", &arr[i]);
		} 
		for(int i = 0 ; i < tc ; i++){
			//printf("max: %d, curr item: %d\n", max, arr[i]);
			if(m.count(arr[i])>0){
				if(max < m.size()) max = m.size();
				i = m[arr[i]];
				m.clear();
			}else{
				m[arr[i]] = i;
			}
		}
		if(m.size() > max) max = m.size();

		printf("%d\n", max);
	}

	return 0;
}