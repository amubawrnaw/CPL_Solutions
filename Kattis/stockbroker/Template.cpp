#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	//freopen("out.txt","wt",stdout);
	int days;
	scanf("%d", &days);
	int stonks = 0;
	int prev = 999;
	int curr = 0;
	int bal = 100;
	for(int i = 0 ; i < days ; i++){
		scanf("%d", &curr);
		if(curr < prev){
			//buy
			stonks += bal / curr;
			bal -= stonks * curr;
		}else{
			//sell
			bal += stonks * curr;
			stonks = 0;
		}
		prev = curr;
	}
	printf("%d", bal);
	return 0;
}