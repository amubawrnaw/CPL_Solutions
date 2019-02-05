#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	//freopen("out.txt","wt",stdout);
	string line, line2;
	int temp, day = 1;
	while(cin >> line){
		cin >> line2;
		map<string,int> entry, bill;
		set<string> custs;
		while(line2.compare("CLOSE")!=0){
			if(line2.compare("ENTER") == 0){
				cin >> line2;
				custs.insert(line2);
				scanf("%d", &entry[line2]);
			}else if(line2.compare("EXIT") == 0){
				cin >> line2;
				scanf("%d", &temp);
				bill[line2] += temp-entry[line2];
			}
			cin >> line2;
		}
		if(day!=1) printf("\n");
		printf("Day %d\n", day);
		day++;
		for(auto x: custs){
			printf("%s $%.2f\n", x.c_str(), bill[x]/10.0);
		}
	}
	return 0;
}