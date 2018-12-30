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

int main() {
	FILE *pFile = fopen("out.txt","w");

	int nCtr;
	scanf("%d",&nCtr);
	string in;
	stack<string> dream; 
	for(int i = 0; i < nCtr; i++) {
		cin >> in;
		if(in.compare("Sleep")==0){
			cin >> in;
			dream.push(in);
		}else if(in.compare("Test")==0){
			if(dream.empty()){
				cout << "Not in a dream\n";
			}else{
				cout << dream.top() << "\n";
			}

		}else{
			if(!dream.empty())
				dream.pop();
		}
	}
	return 0;
}