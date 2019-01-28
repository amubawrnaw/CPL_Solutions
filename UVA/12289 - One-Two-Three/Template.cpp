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
		if(line.length() == 5) printf("3\n");
		else{
			int t = 0;
			if(line[0] == 'o')t++;
			if(line[1] == 'n')t++;
			if(line[2] == 'e')t++;
			if(t>=2)printf("1\n");
			else printf("2\n");
		}
	}

	return 0;
}