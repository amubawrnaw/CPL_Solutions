#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	//freopen("out.txt","wt",stdout);
	priority_queue<int, vector<int>, greater<int> > pq;
	int n, temp, sum, n2;
	while(scanf("%d",&n),n){
		sum = 0;
		n2 = n;
		while(n--){
			scanf("%d", &temp);
			pq.push(temp);
		}
		int x, y, z;
		while(n2-->1){
			x = pq.top();pq.pop();
			y = pq.top();pq.pop();
			z = x+y;
			//printf("%d + %d = %d | %d\n",x,y,z, pq.size());
			sum+=z;
			pq.push(z);
		}
		pq.pop();
		printf("%d\n", sum);
	}
	return 0;
}