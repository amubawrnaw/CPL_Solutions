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

	int nCtr, trash;
	scanf("%d%c",&nCtr, &trash);
	char carloskasi[] = {'a','b','c','d','e','f','g','h','i','j','k','l','n','m','o','p','q','r','s','t','u','v','w','x','y','z'};
	for(int i = 0; i < nCtr; i++) {
		map<char, bool> m;
		for(int k = 0 ; k < 26 ; k++){
			m[carloskasi[k]] = false;
		}
		getline(cin, line);
		for(int k = 0 ; k < line.length() ; k++){
			if(m.count(tolower(line[k]))>0){
				m[tolower(line[k])] = true;
			}
		}
		string s = "";
		for(map<char, bool>::iterator i = m.begin() ; i != m.end() ; ++i){
			if(!i->second)
				s+=i->first;
		}
		if(s.compare("") == 0){
			printf("pangram\n");
		}else{
			printf("missing ");
			cout << s << "\n";
		}
	}
	return 0;
}