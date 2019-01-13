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

int fill(vector<string> &arr, int x, int y, int h, int w);
int fill_dot(vector<string> &arr, int x, int y, int h, int w){
	int dcount = 1;
	queue<int> q;
	int ind = x * w + y;
	q.push(ind);
	int dx[] = {0,1,0,-1};
	int dy[] = {1,0,-1,0};
	int hx,hy;
	queue<int> dq;
	
	while(!q.empty()){
		int qv = q.front();
		q.pop();
		int tx = qv/w;
		int ty = qv%w;
		if(arr[tx][ty]!='.'){
			arr[tx][ty] = '.';
			for(int i = 0 ; i < 4 ; i++){
				int ntx = tx+dx[i];
				int nty = ty+dy[i];
				if(ntx >= 0 && nty >= 0  && ntx < h && nty < w){
					if(arr[ntx][nty] == '*'){
						dq.push(ntx * w + nty);
					}else if(arr[ntx][nty] == 'X'){
						q.push(ntx * w + nty);
					}
				}
			}
		}
	}
	while(!dq.empty()){
		int qv = dq.front();
		dq.pop();
		int tx = qv/w;
		int ty = qv%w;
		if(arr[tx][ty] == '*')
			dcount+=fill(arr, tx,ty,h,w);
	}
	
	return dcount;
}
int fill(vector<string> &arr, int x, int y, int h, int w){
	int dcount = 0;
	queue<int> q;
	int ind = x * w + y;
	q.push(ind);
	int dx[] = {0,1,0,-1};
	int dy[] = {1,0,-1,0};
	
	while(!q.empty()){
		int qv = q.front();
		q.pop();
		int tx = qv/w;
		int ty = qv%w;
		if(arr[tx][ty]!='.'){
			arr[tx][ty] = '.';
			for(int i = 0 ; i < 4 ; i++){
				int ntx = tx+dx[i];
				int nty = ty+dy[i];
				if(ntx >= 0 && nty >= 0  && ntx < h && nty < w){
					if(arr[ntx][nty] == '*')
						q.push(ntx * w + nty);
					else if(arr[ntx][nty] == 'X'){
						dcount+=fill_dot(arr, ntx,nty,h,w);
					}
				}
			}
		}
	}
	
	return dcount;
}

int main() {
	FILE *pFile = fopen("out.txt","w");
	string line;
	int h,w, cnt;
	int tcount = 0;
	while(scanf("%d",&w),w) {
		tcount++;
		scanf("%d",&h); 
		vector<string> arr(h);
		vector<int> ans;
		for(int i = 0 ; i < h ; i++){
			cin >> line;
			arr[i] = line;
		}
		for(int i = 0 ; i < h ; i++){
			for(int k = 0 ; k < w ; k++){
				if(arr[i][k] == '*'){
					ans.push_back(fill(arr, i,k,h,w));
				}else if(arr[i][k] == 'X'){
					ans.push_back(fill_dot(arr,i,k,h,w));
				}
			}
		}
		printf("Throw %d\n",tcount);
		sort(ans.begin(), ans.end());
		for(int i = 0 ; i < ans.size() ; i++){
			printf("%d", ans[i]);
			if(i != ans.size()-1) printf(" ");
		}
		printf("\n\n");
	}
	return 0;
}