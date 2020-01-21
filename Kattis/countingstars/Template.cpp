#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;
int y,x;
vector<string> arr;
int ff(int y1, int x1){
	if(y1<0 || x1 <0 || x1 >= x || y1>= y || arr[y1][x1]=='#') return 0;
	arr[y1][x1]='#';
	ff(y1-1,x1);
	ff(y1,x1-1);
	ff(y1+1,x1);
	ff(y1,x1+1);
	return 1;
}
int main() {
	//freopen("out.txt","wt",stdout);
	int c = 1, ans;
	string temp;
	while(scanf("%d %d", &y, &x)==2){
		arr.clear();
		ans = 0;
		for(int i = 0 ; i < y ; i++){
			cin >> temp;
			arr.push_back(temp);
		} 
		for(int i = 0 ; i < y ; i++){
			for(int k = 0 ; k < x ; k++){
				if(arr[i][k]=='-'){
					ans++;
					ff(i,k);
				}
			}
		}
		printf("Case %d: %d\n", c, ans);
		c++;
	}
	return 0;
}
