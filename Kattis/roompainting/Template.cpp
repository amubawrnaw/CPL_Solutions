#include <bits/stdc++.h>
using namespace std;

int narr[100002], marr[100002]; 
int n,m;
int binsearch(int find){
	int hi = n-1;
	int low = 0;
	int mid;
	int curr = 0;
	while(low<=hi){
		mid = (low+hi)/2;
		if(narr[mid] == find){
			return 0;
		}else if(find > narr[mid]){
			low = mid+1;
		}else{
			hi = mid-1;
		}
	}
	if(narr[mid]<find){
		return narr[mid+1]-find;
	}else{
		return narr[mid]-find;
	}
}

int main() {
	//freopen("out.txt","wt",stdout);
	scanf("%d%d",&n,&m);
	for(int i = 0 ; i < n ; i++){
		scanf("%d", &narr[i]);
	}
	for(int i = 0 ; i < m ; i++){
		scanf("%d", &marr[i]);
	}

	sort(marr, marr+m);
	sort(narr, narr+n);

	long long ans = 0;

	for(int i = 0 ; i < m ; i++){
		ans+= binsearch(marr[i]);
	}
	printf("%lld",ans);
	return 0;
}