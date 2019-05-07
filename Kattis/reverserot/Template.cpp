#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	//freopen("out.txt","wt",stdout);
	char carr[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P',
	'Q','R','S','T','U','V','W','X','Y','Z','_','.'};
	int ind, n;
	string line;
	while(scanf("%d",&n),n) {
		cin >> line;
		reverse(line.begin(), line.end());
		for(int i = 0 ; i < line.length() ; i++){
			if(line[i] == '_'){
				ind = 26;
			}else if(line[i] == '.'){
				ind = 27;
			}else{
				ind = line[i] - 'A';
			}
			line[i] = carr[(ind+n)%28];
		}
		cout<<line<<endl;
	}
	return 0;
}