#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	//freopen("out.txt","wt",stdout);
	string line;
	int ans,n,trash;
	while(scanf("%d",&n),n) {
		int xarr[n];
		scanf("%c", &trash);
		ans = 0;
		for(int i = 0 ; i < n ; i++){
			getline(cin,line);
			int temp = 0;
			for(int k = 0 ; k < 25 ; k++){
				if(line[k] == 'X') temp++;
			}
			xarr[i] = 25-temp;
		}
		sort(xarr, xarr+n);
		int min = xarr[0];
		for(int i = 1 ; i < n ; i++){
			ans+= xarr[i]-min;
		}
		printf("%d\n", ans);
	}
	return 0;
}