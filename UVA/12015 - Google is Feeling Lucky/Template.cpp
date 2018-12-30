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
	int max, score;
	string s, in;
	int nCtr;
	scanf("%d",&nCtr);
	for(int i = 0; i < nCtr; i++) {
		max = 0;
		s = "";
		for(int k = 0 ; k < 10 ; k++){
			cin >> in >> score;
			if(score == max){
				s.append(in);
				s.append("\n");
			}else if(score > max){
				max = score;
				s = in.append("\n");
			}
		}
		cout << "Case #" << i+1 << ":\n";
		cout << s;
	}
	return 0;
}