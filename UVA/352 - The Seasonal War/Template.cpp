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

void fill(vector<string> &img, int x, int y, int size){
	queue<int> q;
	int ind = x * size + y;
	q.push(ind);
	int dx[] = {0,1,0,-1,1,1,-1,-1};
	int dy[] = {1,0,-1,0,1,-1,1,-1};
	while(!q.empty()){
		int qv = q.front();
		q.pop();
		int tx = qv/size;
		int ty = qv%size;
		if(img[tx][ty]!='x'){
			img[tx][ty] = 'x';
			for(int i = 0 ; i < 8 ; i++){
				int ntx = tx+dx[i];
				int nty = ty+dy[i];
				if(ntx >= 0 && nty >= 0  && ntx < size && nty < size && img[ntx][nty] == '1')
					q.push(ntx * size + nty);
			}
		}
		
	}

}


int main() {
	FILE *pFile = fopen("out.txt","w");
	int imnum = 1;
	
	int size;
	string line;
	while(scanf("%d",&size) == 1) {
		vector<string> img(size);
		int wa = 0;
		for(int i = 0 ; i < size ; i++){
			cin >> line;
			img[i] = line;
		}
		for(int i = 0 ; i < size ; i++){
			for(int k = 0 ; k < size ; k++){
				if(img[i][k] == '1'){
					wa++;
					fill(img, i,k,size);
				}
			}
		}
		printf("Image number %d contains %d war eagles.\n",imnum,wa);
		imnum++;
	}
	fclose(pFile);
	return 0;
}