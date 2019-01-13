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

#define UP 0
#define LEFT 1
#define ACROSS 2

int main() {
	FILE *pFile = fopen("out.txt","w");
	string line1, line2;
	
	while(getline(cin,line1)){
		stack<char> dirs;
		string ans = "";
		getline(cin,line2);
		int table[line1.length()+1][line2.length()+1];
		char dir[line1.length()+1][line2.length()+1];
		for(int i = 0 ; i < line2.length() +1 ; i++){
			dir[0][i] = LEFT;
			table[0][i] = 0;
		} 
		for(int i = 0 ; i < line1.length() +1 ; i++){
			table[i][0] = 0;
			dir[i][0] = UP;
		} 


		sort(line1.begin(), line1.end());
		sort(line2.begin(), line2.end());

		for(int i = 1 ; i <= line1.length() ; i++){
			for(int k = 1 ; k <= line2.length() ; k++){
				if(line1[i-1] == line2[k-1]){
					table[i][k] = table[i-1][k-1] + 1;
					dir[i][k] = ACROSS;
				}else{
					if(table[i-1][k] > table[i][k-1]){
						table[i][k] = table[i-1][k];
						dir[i][k] = UP;
					}else{
						table[i][k] = table[i][k-1];
						dir[i][k] = LEFT;
					}
				}
			}
		}
		
		int i = line1.length();
		int k = line2.length();
		while(i!=0 && k!=0){
			if(dir[i][k]==ACROSS){
                dirs.push(line1[i-1]);
                i--;
                k--;
            }else if(dir[i][k]==LEFT){
                k--;
            }else if(dir[i][k]==UP){
                i--;
            }
		}
		while(!dirs.empty()){
			printf("%c",dirs.top());
			dirs.pop();
		} 
		printf("\n");
	}
	fclose(pFile);
	return 0;
}