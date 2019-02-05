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
	vector<string> arr;
	while(cin >> line){
		arr.push_back(line);
	}
	set<string> s;
	for(int i = 0 ; i < arr.size(); i++){
		for(int k = 0 ; k < arr.size(); k++){
			if(i!=k){
				string t = arr[i];
				s.insert(t.append(arr[k]));
			}
		}
	}
	for_each(s.begin(), s.end(), [](string s){
		cout << s << "\n";
	});
	return 0;
}