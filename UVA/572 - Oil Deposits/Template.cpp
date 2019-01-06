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

void fill(vector<string> &arr, int x, int y, int h, int w){
	queue<int> q;
	int ind = x * w + y;
	q.push(ind);
	int dx[] = {0,1,0,-1,1,1,-1,-1};
	int dy[] = {1,0,-1,0,1,-1,1,-1};
	while(!q.empty()){
		int qv = q.front();
		q.pop();
		int tx = qv/w;
		int ty = qv%w;
		if(arr[tx][ty]!='x'){
			arr[tx][ty] = 'x';
			for(int i = 0 ; i < 8 ; i++){
				int ntx = tx+dx[i];
				int nty = ty+dy[i];
				if(ntx >= 0 && nty >= 0  && ntx < h && nty < w && arr[ntx][nty] == '@')
					q.push(ntx * w + nty);
			}
		}
	}
}

int main() {
	FILE *pFile = fopen("out.txt","w");
	string line;
	int h,w, cnt;
	while(scanf("%d",&h),h) {
		scanf("%d",&w);
		cnt = 0;
		vector<string> arr(h);
		for(int i = 0 ; i < h ; i++){
			cin >> line;
			arr[i] = line;
		}
		for(int i = 0 ; i < h ; i++){
			for(int k = 0 ; k < w ; k++){
				if(arr[i][k] == '@'){
					cnt++;
					fill(arr, i,k,h,w);
				}
			}
		}
		printf("%d\n",cnt);
	}

	return 0;
}