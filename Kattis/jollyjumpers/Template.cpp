#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	int n;
	while(scanf("%d", &n)==1){
		int arr[n];
		bool b[n] = {false};
		for(int i = 0 ; i < n ; i++) scanf("%d", &arr[i]);
		for(int i = 1 ; i < n ; i++){
			int a = abs(arr[i]-arr[i-1]);
			b[a] = true;
		}
		for(int i = 1 ; i < n ; i++){
			if(!b[i]){
				printf("Not jolly\n");
				goto end;
			}
		}
		printf("Jolly\n");
		end:;
	}
	return 0;
}
