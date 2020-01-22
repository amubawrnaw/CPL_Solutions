#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int dc = 2;
int bc = -1;
int xm, ym;
int arr[1001][1001];
int ff(int x, int y, int v, int cmpc){
	if(x<0 || y<0 || x>=xm || y>= ym || arr[y][x] != cmpc) return 0;
	arr[y][x] = v;
	ff(x-1,y,v,cmpc);
	ff(x,y-1,v,cmpc);
	ff(x+1,y,v,cmpc);
	ff(x,y+1,v,cmpc);
	return 0;
}

void print(){
	for(int i = 0 ; i < ym ; i++){
		for(int k = 0 ; k < xm ; k++){
			printf("%d,", arr[i][k]);
		}
		printf("\n");
	}
	printf("\n");
}

int main() {
	char ctemp;
	scanf("%d %d\n",&ym, &xm);
	for(int i = 0; i < ym; i++) {
		for(int k = 0 ; k < xm ; k++){
			scanf("%c", &ctemp);
			arr[i][k] = (ctemp=='1'?1:0);
		}
		//for \n
		scanf("%c", &ctemp);
	}
	
	for(int i = 0 ; i < ym ; i++){
		for(int k = 0 ; k < xm ; k++){
			if(arr[i][k] == 0){
				ff(k,i,bc,0);
				bc--;
			}else if(arr[i][k] == 1){
				ff(k,i,dc,1);
				dc++;
			}
		}
	}
	int qc, r1,r2,c1,c2;
	scanf("%d", &qc);
	while(qc--){
		scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
		r1--;c1--;r2--;c2--;
		if(arr[r1][c1] == arr[r2][c2]){
			printf(arr[r1][c1]<0?"binary\n":"decimal\n");
		}else{
			printf("neither\n");
		}
	}
}
