#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	//freopen("out.txt","wt",stdout);
	int a,b,c = -1;
	int arr[4];

	scanf("%d %d %d %d", &arr[0],&arr[1],&arr[2],&arr[3]);
	sort(arr, arr+4);

	c = arr[3] - arr[0];
	b = arr[2] - c;
	a = arr[1] - c;

	printf("%d %d %d", a,b,c);

	return 0;
}