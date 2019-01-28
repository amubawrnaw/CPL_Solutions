#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	FILE *pFile = fopen("out.txt","w");
	string line;
	int n, tc, trash, in, c = 1;
	while(scanf("%d",&n),n) {
		fprintf(pFile,"Scenario #%d\n", c);
		c++;
		priority_queue<int> pq;
		while(n--){
			getline(cin, line);
		}
		cin >> line;
		while(line.compare("STOP")!=0){
			if(line.compare("ENQUEUE") == 0){
				scanf("%d", &in);
				pq.push(in);
			}else{
				if(!pq.empty()){
					int t = pq.top();
					pq.pop();
					fprintf(pFile,"%d\n", t);
				}
			}
			cin >> line;
		}
		fprintf(pFile,"\n");

	}

	fclose(pFile);
	return 0;
}