#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	//freopen("out.txt","wt",stdout);
	int ctr, n, temp;
	scanf("%d", &ctr);
	while(ctr--){
		scanf("%d",&n);
		queue<int> q;
		while(n!=0){
			q.push(n);
			for(int i = 0 ; i < n ; i++){
				temp = q.front();
				q.pop();
				q.push(temp);
			}
			n--;
		}
		stack<int> s;
		while(!q.empty()){
			s.push(q.front()); q.pop();
		}
		while(!s.empty()){
			printf("%d ", s.top());s.pop();
		}
		printf("\n");
	}
	return 0;
}
