#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;


int m,n;

void ff(string s[], int x, int y){
	int dx[] = {-1,0,1,-1,1,-1,0,1};
	int dy[] = {-1,-1,-1,0,0,1,1,1};
	queue<int> q;
	q.push(x * n + y);
	while(!q.empty()){
		int nt = q.front(); q.pop();
		int nx = nt/n;
		int ny = nt%n;
		s[nx][ny] = '.';
		for(int i = 0 ; i < 8 ; i++){
			int nnx = nx + dx[i];
			int nny = ny + dy[i];
			if(nnx >= 0 && nnx < m && nny >=0 && nny < n && s[nnx][nny] == '#'){
				q.push(nnx * n + nny);
			}
		}
	}
}

int main() {
	//freopen("out.txt","wt",stdout);
	
	scanf("%d %d", &m, &n);
	string s[m];
	for(int i = 0 ; i < m ; i++){
		cin >> s[i];
	}
	int cnt = 0;
	for(int i = 0 ; i < m ; i++){
		for(int k = 0 ; k < n; k++){
			if(s[i][k] == '#'){
				cnt++;
				ff(s, i, k);
			}
		}
	}
	printf("%d", cnt);
	return 0;
}