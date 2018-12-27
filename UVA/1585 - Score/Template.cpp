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

	int nCtr;
	scanf("%d",&nCtr);
	string in;
	for(int i = 0; i < nCtr; i++) {
		cin >> in;
		int adder = 1;
		int sum = 0;
		for(int k = 0 ; k < in.length() ; k++){
			if(in[k] == 'O'){
				sum+=adder;
				adder++;
			}else{
				adder = 1;
			}
		}
		cout << sum << "\n";
	}
	return 0;
}