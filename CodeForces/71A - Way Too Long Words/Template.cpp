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
		if(line.length()>10){
			printf("%c%d%c\n",line[0], line.length()-2, line[line.length()-1]);
		}else{
			cout << line << endl;
		}
	}
	return 0;
}