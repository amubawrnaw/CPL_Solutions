#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;
int ans = 0;
int xm, ym;
vector<string> arr;


int ff(int i, int k){
	if(i<0 || k<0 || i>=ym || k>=xm) return 0;
	if(arr[i][k]=='1'){
		ans++;
		return 0;
	}
	if(arr[i][k]=='0'){
		arr[i][k] = 'c';
		ff(i-1,k);
		ff(i,k-1);
		ff(i+1,k);
		ff(i,k+1);
	}
	return 1;
}

void bruh(int i, int k){
	if(arr[i][k]=='1'){
		ans++;
		//if((i==0&&k==0)||(i==ym-1&&k==xm-1)||(i==ym-1&&k==0)||(i==0&&k==xm-1))ans++;
	}else if(arr[i][k]=='0'){ 
		ff(i,k);
	}
}

int main() {
	string temp;
	scanf("%d %d", &ym, &xm);
	for(int i = 0 ; i < ym ; i++){
		cin >> temp;
		arr.push_back(temp);
	}

	for(int i = 0 ; i < ym ; i++){
		bruh(i,0);
		bruh(i,xm-1);
	}
	// for(int i = 0 ; i < ym ; i++){
	// 	cout << arr[i] << endl;
	// }
	for(int i = 0 ; i < xm ; i++){
		bruh(0,i);
		bruh(ym-1,i);
	}

	printf("%d\n",ans);
	return 0;
}
