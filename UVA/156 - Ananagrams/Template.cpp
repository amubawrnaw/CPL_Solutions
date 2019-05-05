#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;
string format(string s){
	
	string n = "";
	for(int i = 0 ; i < s.length() ; i++){
		n += tolower(s[i]);
	}
	sort(n.begin(), n.end());
	return n;
}

int main() {
	//freopen("out.txt","wt",stdout);
	string line;
	bitset<1001> bs;
	bs.set();
	vector<string> arr;
	while(cin >> line) {
		if(line.compare("#")==0) break;
		arr.push_back(line);
	}
	string curr;
	for(int i = 0 ; i < arr.size() ; i++){
		curr = format(arr[i]);
		if(curr.length() != 1)
			for(int k = i+1 ; k < arr.size(); k++){
				if(curr.compare(format(arr[k])) == 0){
					bs.reset(i);
					bs.reset(k);
				}
			}
	}
	vector<string> newarr;
	for(int i = 0 ; i < arr.size() ; i++){
		if(bs.test(i))
			newarr.push_back(arr[i]);
	}
	sort(newarr.begin(), newarr.end());
	for(int i = 0 ; i < newarr.size() ; i++){
		cout << newarr[i] << endl;
	}
	return 0;
}