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
	stack<char> s;
	for(int i = 0 ; i < line.length() ; i++){
		if(line[i]!='<'){
			s.push(line[i]);	
		}else if(!s.empty()){
			s.pop();
		}
	}
	line = "";
	while(!s.empty()){
		line+=s.top();
		s.pop();
	}
	reverse(line.begin(), line.end());
	cout << line;
	return 0;
}