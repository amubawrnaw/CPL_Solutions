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
	int nCtr;
	scanf("%d",&nCtr);
	for(int i = 0; i < nCtr; i++) {
		cin >> line;
		vector<string> arr;
		sort(line.begin(), line.end());
		do{
			arr.push_back(line);
		} while(next_permutation(line.begin(), line.end()));
		sort(arr.begin(), arr.end());
		for(int k = 0 ; k < arr.size() ; k++){
			cout << arr[k] << "\n";
		}
	}
	return 0;
}