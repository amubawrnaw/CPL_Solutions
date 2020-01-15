#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

string arr[51];
int x,y;
map<int,int> m;
int main() {
	int car;
	scanf("%d %d", &y, &x);
	for(int i = 0 ; i < y ; i++) cin >> arr[i];
	for(int i = 0 ; i < y-1 ; i++){
		for(int k = 0 ; k < x-1 ; k++){
			car = 0;
			if(arr[i][k]!='#'&&arr[i+1][k]!='#'&&arr[i][k+1]!='#'&&arr[i+1][k+1]!='#'){
				if(arr[i][k]=='X')car++;
				if(arr[i][k+1]=='X')car++;
				if(arr[i+1][k]=='X')car++;
				if(arr[i+1][k+1]=='X')car++;
				m[car]++;
			}
		}
	}
	for(int i = 0 ; i <= 4 ; i++) printf("%d\n", m[i]);
	return 0;
}
