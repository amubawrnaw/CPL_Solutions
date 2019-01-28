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
	int n, ctr = 1;
	while(scanf("%d", &n),n){
		string arr[n];
		for(int i = 0 ; i < n ; i++){
			cin >> arr[i];
		}
		sort(arr, arr+n, [](string a, string b){
			return a.length() < b.length();
		});
		
		string ans[n];
		for(int i = 0,k = n-1, a = 0 ; a < n ;a++){
			if(a%2==0){
				ans[i]=arr[a];
				i++;
			}else{
				ans[k]=arr[a];
				k--;
			}
		}
		printf("SET %d\n",ctr);
		ctr++;
		for(int i = 0 ; i < n ; i++){
			cout << ans[i] << "\n";
		}
	}
	return 0;
}