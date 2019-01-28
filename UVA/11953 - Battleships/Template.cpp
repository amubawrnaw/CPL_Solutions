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


void fill(vector<string> &arr, int x, int y, int lc){
	queue<int> q;
	q.push(x*lc+y);
	int dx[] = {1,0,-1,0};
	int dy[] = {0,1,0,-1};
	while(!q.empty()){
		int z = q.front();
		q.pop();
		int qx = z/lc;
		int qy = z%lc;

		if(arr[qx][qy] == 'x' || arr[qx][qy]== '@'){
			arr[qx][qy] = '.';
			for(int i = 0 ; i < 4 ; i++){
				int nx = qx+dx[i];
				int ny = qy+dy[i];
				if(nx >= 0 && ny >=0 && nx<lc && ny <lc)
					if(arr[nx][ny] == 'x' || arr[nx][ny]== '@')
						q.push(nx*lc+ny);
			}
		}
	}
}



int main() {
	string line;
	FILE *pFile = fopen("out.txt","w");
	int lc, bc;
	int nCtr;
	vector<string> arr;
	scanf("%d",&nCtr);
	for(int i = 0; i < nCtr; i++) {
		bc = 0;
		arr.clear();
		scanf("%d", &lc);
		for(int k = 0 ; k < lc ; k++){
			cin >> line;
			arr.push_back(line);
		}

		for(int k = 0 ; k < lc ; k++){
			for(int j = 0 ; j < lc ; j++){
				if(arr[k][j] == 'x'){
					fill(arr,k,j,lc);
					bc++;
				}
			}
		}
		printf("Case %d: %d\n", i+1, bc);
	}
	fclose(pFile);
	return 0;
}