#include <cstdio>
#include <cmath>
#include <cstring>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int fill(int x, int y, vector<string> &arr,int m, int n, char c){
	int area = 0;
	queue<int> q;
	int temp = x * n + y;
	q.push(temp);
	int dx[] = {1,0,-1,0};
	int dy[] = {0,-1,0,1};
	while(!q.empty()){
		int t = q.front();
		q.pop();
		int tx = t/n;
		int ty = t%n;
		if(arr[tx][ty]==c){
			area++;
			arr[tx][ty] = (char) c-1;
			for(int i = 0 ; i < 4 ; i++){
				int nx = tx + dx[i];
				int ny = ty + dy[i];

				ny = (ny+n)%n;

				if(nx >=0 && nx < m && arr[nx][ny]==c)
					q.push(nx * n + ny);
			}
		}
	}
	return area;
}

int main() {
	FILE *pFile = fopen("out.txt","w");

	int m, n;
	while(scanf("%d",&m)==1) {
		scanf("%d",&n);
		vector<string> arr(m);

		string line;
		for(int i = 0 ; i < m ; i++){
			cin >> line;
			arr[i] = line;
		}
		int x, y;
		cin >> x >> y;
		char notwater = arr[x][y];
		int largest = 0;
		fill(x,y,arr,m, n, notwater);
		for(int i = 0 ; i < m ; i++){
			for(int k = 0 ; k < n ; k++){
				if(arr[i][k]==notwater){
					int temp = fill(i,k, arr,m, n, notwater);
					if(temp > largest) largest = temp;
				}
			}
		}
		printf("%d\n", largest);
	}
	fclose(pFile);
	return 0;
}