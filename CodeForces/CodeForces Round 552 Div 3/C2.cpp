#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	//freopen("out.txt","wt",stdout);
	
	set<int> s;
	int temp, cnt, mid;
	scanf("%d", &cnt);
	while(cnt--){
		scanf("%d", &temp);
		s.insert(temp);
	}
	vector<int> arr;
	if(s.size() > 3){
		printf("-1");
	}else if (s.size() == 1){
		printf("0");
	}else if(s.size() == 3){
		arr.assign(s.begin(), s.end());
		sort(arr.begin(), arr.end());
		if(arr[1] - arr[0] == arr[2] - arr[1]) printf("%d", arr[1] - arr[0]);
		else printf("-1");
	}	
	else{
		arr.assign(s.begin(), s.end());
		sort(arr.begin(), arr.end());
		mid = ( arr[1] - arr[0] ) / 2;
		if(arr[0] + mid == arr[1] - mid) printf("%d",mid);
		else{	
			printf("%d", arr[1] - arr[0]);
		}
	}

	return 0;
}