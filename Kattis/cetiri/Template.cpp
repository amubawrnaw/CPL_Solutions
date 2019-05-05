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
	int arr[3];
	for(int i = 0; i < 3; i++) {
		scanf("%d", &arr[i]);
	}
	sort(arr, arr+3);
	if(arr[2]-arr[1]==arr[1]-arr[0])printf("%d",arr[2]+(arr[1]-arr[0]));
	else {
		
	}
	return 0;
}