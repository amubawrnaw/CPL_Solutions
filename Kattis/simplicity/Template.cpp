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
	cin >> line;
	map<char, int> m;
	for(int i = 0 ; i < line.length() ; i++){
		m[line[i]]++;
	}
	vector<int> v;
	
	for(map<char, int>::iterator i= m.begin(); i != m.end(); i++){
		v.push_back(i->second);//value;
	}
	sort(v.begin(), v.end());
	int ans = 0;
	int max = v.size() - 2;
	for(int i = 0 ; i < max; i++){
		ans+=v[i];
	}
	
	printf("%d",ans);
	return 0;
}