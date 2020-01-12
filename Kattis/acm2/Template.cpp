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
	int timeleft = 300 - ans;
	arr.erase(arr.begin() + ind);
	sort(arr.begin(), arr.end());
	bool solved = false;
	int sc = 1;
	while(timeleft>0&&arr.size()!=0){
		solved = true;
		if(timeleft-arr[0]>=0){
			sc++;
			ans += (300-timeleft)+arr[0];
			timeleft-=arr[0];
			arr.erase(arr.begin());
		}else{
			break;
		}
	}
	/*

	3 1
	299 1 1
	1 299
	ans = 299
	*/
	if(!solved&&timeleft<0){
		printf("0 0");
	}else{
		printf("%d %d", sc, ans);
	}
}
