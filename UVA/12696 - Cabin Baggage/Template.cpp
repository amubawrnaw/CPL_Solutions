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
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	FILE *pFile = fopen("out.txt","w");
	char garb;
	int nCtr;
	scanf("%d",&nCtr);
	int tot = 0;
	for(int i = 0; i < nCtr; i++) {
		float x,y,z,w,sum;
		scanf("%f%f%f%f",&x,&y,&z,&w);
		sum = x + y + z;
		if((sum <= 125 || x <= 56 && y <= 45 && z <= 25) && w <= 7){
			cout << "1\n";
			tot++;
		}else{
			cout << "0\n";
		}
	}
	//kulang lang pala ng \n angory
	cout << tot << "\n";
}