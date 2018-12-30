#include <cstdio>
#include <cmath>
#include <cstring>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
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
	string in;
	stack<int> s;
	int water;
	scanf("%d",&nCtr);
	for(int i = 0; i < nCtr; i++) {
		water = 0;
		s = stack<int>();
		cin >> in;
		for(int k = 0 ; k < in.length() ; k++){
			if(in[k] == '\\'){
				s.push(k);
			}else if(in[k] == '/' && !s.empty()){
				water += k - s.top();
				s.pop(); 
			}
		}
		cout << water << "\n";
	}
	return 0;
}