#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

#define LEFT 0
#define UP 1
#define RIGHT 2
#define DOWN 3

int main() {
	//freopen("out.txt","wt",stdout);
	int arr[4][4];
	for (int i = 0 ; i < 4 ;  i++){
		for (int k = 0 ; k < 4 ; k++){
			scanf("%d", &arr[i][k]);
		}
	}
	int dir;
	scanf("%d", &dir);
	int temp;
	switch(dir){
		case UP://left
			for(int i = 0 ; i < 4 ; i++){
				for(int k = 3 ; k > 0 ; k--){
					temp = arr[i][k-1];
					if(arr[i][k] == temp && temp != 0){
						arr[i][k-1] += temp;
						arr[i][k] = 0;
						k = 3;
					}else if(temp == 0 && arr[i][k] != 0){
						arr[i][k-1] = arr[i][k];
						arr[i][k] = 0;
						k = 3;
					} 
				}
			}
			break;
		case DOWN://up

			break;
		case LEFT://right

			break;
		case RIGHT://down
			for(int i = 0 ; i < 4 ; i++){
				for(int k = 3 ; k >= 0 ; k--){
					
				}
			}
			break;
	}


	for (int i = 0 ; i < 4 ;  i++){
		for (int k = 0 ; k < 4 ; k++){
			printf("%d ", arr[i][k]);
		}
		printf("\n");
	}

	return 0;
}