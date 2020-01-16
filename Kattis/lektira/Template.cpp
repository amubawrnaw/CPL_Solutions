#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;
set<string> s;
int main() {
	string line;
	cin >> line;
	string s1,s2,s3;
	for(int i = 1 ; i < line.length()-1 ; i ++){
		for(int k = i+1 ; k < line.length() ; k++){
				s1 = line.substr(0, i);
				s2 = line.substr(i, k-i);
				s3 = line.substr(k);
				//cout << s1 << ',' << s2 << ',' << s3 << endl;
				reverse(s1.begin(),s1.end());
				reverse(s2.begin(),s2.end());
				reverse(s3.begin(),s3.end());
				s1.append(s2);
				s1.append(s3);
				s.insert(s1);
		}
	}
	cout << *(s.begin());
	return 0;
}
