#include <cstdio>
#include <cmath>
#include <cstring>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>
#include <queue>
#include <bitset>
#include <map>
#include <stack>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;
double ans;
vii ppl;
map<int, double> m;
int goal;
double dists[16][16];
int n;

double dist(ii x, ii y){
	double dx = y.first - x.first;
	double dy = y.second - x.second;
	double sqr = dx * dx + dy * dy;
	return sqrt(sqr);
}

double solve(int key){
	if(key == goal){
		return 0;
	}else if(m[key]>-0.5){
		return m[key];
	}
	//printf("%d\n", m[key]);
	double ans = 200000000.0;
	int p1,p2;
	//look for an unfilled mask
	for(p1 = 0; p1 <n ;p1++) if(!(key & (1 << p1))) break;
	//look for another unfilled mask
	for(p2 = p1+1; p2 <n ;p2++) 
	if(!(key &( 1 << p2)))
		ans = min(ans, dists[p1][p2] + solve(key | (1 << p1) | (1 << p2)));
	return m[key] = ans;
}


int main() {
	FILE *pFile = fopen("out.txt","w");
	int tc = 1, x, y;

	string trash;

	while(scanf("%d",&n),n) {
		ppl.clear();
		ans = 0;
		n*=2;
		goal = (1<<(n))-1; // gives 2n 1's
		for(int i = 0 ; i < n ; i++){
			cin >> trash;
			scanf("%d %d", &x, &y);
			ppl.push_back(ii(x,y));
		}
		for(int i = 0 ; i < n ; i++){
			for(int k = 0 ; k < n ; k++){
				dists[i][k] = dist(ppl[i], ppl[k]);
			}
		}
		for(int i = 0 ; i < (1<<(n))-1 ; i++) m[i] = -1;
		printf("Case %d: %.2lf\n", tc,solve(0));
		tc++;
	}

	fclose(pFile);
	return 0;
}