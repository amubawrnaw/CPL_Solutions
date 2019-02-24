#include <bits/stdc++.h>

using namespace std;

#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3

int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};

int main(){
	int x,y;
	int ctr = 1;
	while(scanf("%d %d", &x, &y),x&&y){
		int dir;
		int sx, sy;
		vector<string> arr;
		for(int i = 0 ; i < y ;i++){
			string line;
			cin >> line;
			int temp = line.find('*');
			if(temp!=string::npos){
				sx = temp;
				sy = i;
			}
			arr.push_back(line);
		}
		//check which side of the thingy the entrance is
		
		//check if top
		if(sy==0){
			dir = DOWN;
		}else if(sy == y-1){// check if bottom
			dir = UP;
		}else{
			if(sx==0){//check if left
				dir = RIGHT;
			}else{
				dir = LEFT;
			}
		}
		char curr = arr[sy][sx];
		while(curr!='x'){
			if(curr == '\\'){
				switch(dir){
					case UP:dir = LEFT;break;
					case DOWN:dir = RIGHT;break;
					case LEFT:dir = UP;break;
					case RIGHT:dir = DOWN;break;
				}
			}else if(curr == '/'){
				switch(dir){
					case UP:dir = RIGHT;break;
					case DOWN:dir = LEFT;break;
					case LEFT:dir = DOWN;break;
					case RIGHT:dir = UP;break;
				}
			}
			sx+=dy[dir];
			sy+=dx[dir];
			curr = arr[sy][sx];
		}
		arr[sy][sx] = '&';
		printf("HOUSE %d\n", ctr);
		ctr++;
		for(int i = 0 ; i < y ; i++){
			cout << arr[i] <<"\n";
		}
	}
	return 0;
}