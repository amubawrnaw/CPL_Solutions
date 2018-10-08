#include <cstdio>
#include <cmath>
#include <cstring>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>
#include <bitset>
#include <queue>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

string hexToStr(char c){
	switch(c){
		case '0': return "0000";
		case '1': return "0001";
		case '2': return "0010";
		case '3': return "0011";
		case '4': return "0100";
		case '5': return "0101";
		case '6': return "0110";
		case '7': return "0111";
		case '8': return "1000";
		case '9': return "1001";
		case 'a': return "1010";
		case 'b': return "1011";
		case 'c': return "1100";
		case 'd': return "1101";
		case 'e': return "1110";
		case 'f': return "1111";
		default: return "0000";
	}
}

int main() {
	FILE *pFile = fopen("AncientMessages.txt","w");
	int r, c;
	int ccount = 1;
	while(scanf("%d%d",&r,&c),r||c) {
		vector<string> vec(r);
		for(int i = 0 ; i < r ; i++){
			string line;
			cin >> line;
			vec[i] = "";
			for(int j = 0 ; j < c ; j++){
				vec[i]+= hexToStr(line[j]);
			}
		}
		bitset<40000> visited;
		c*=4;
		vi holes;
		vector<vi> symbols(r,vi(c, -1));
		int ctr = 0;
		for(int i = 0 ; i < r ; i++){
			for(int j = 0 ;j < c ; j++){
				int ind = i * c + j;
				if(!visited.test(ind) && vec[i][j] == '1'){
					holes.push_back(0);
					queue<int> q;
					visited.set(ind);
					q.push(ind);
					while(!q.empty()){
						int u = q.front();
						q.pop();
						int row = u/c;
						int col = u%c;

						symbols[row][col] = ctr;

						int dr[] = {-1,0,1,0};
						int dc[] = {0, -1, 0, 1};

						for(int k = 0 ; k < 4 ; k++){
							int nrow = row+ dr[k];
							int ncol = col+ dc[k];
							int nind = nrow * c + ncol;
							if(nrow>=0 && nrow< r && ncol >=0 && ncol < c && 
								!visited.test(nind) && vec[nrow][ncol]=='1'){
								visited.set(nind);
								q.push(nind);
							}
						}

					}
					ctr++;
				}
			}
		}
		for(int i = 0 ; i < r ; i++){
			for(int j = 0 ;j < c ; j++){
				int ind = i * c + j;
				if(!visited.test(ind) && vec[i][j] == '0'){
					queue<int> q;
					visited.set(ind);
					int symb = -1;
					bool ishole = true;
					q.push(ind);
					// printf("DFS from %d %d\n",i,j);
					while(!q.empty()){
						int u = q.front();
						q.pop();
						int row = u/c;
						int col = u%c;

						int dr[] = {-1,0,1,0};
						int dc[] = {0, -1, 0, 1};

						for(int k = 0 ; k < 4 ; k++){
							int nrow = row+ dr[k];
							int ncol = col+ dc[k];
							int nind = nrow * c + ncol;
							if(nrow>=0 && nrow< r && ncol >=0 && ncol < c){
								if(vec[nrow][ncol]=='1'){
									symb = symbols[nrow][ncol];
								}else if(!visited.test(nind)){
									visited.set(nind);
									q.push(nind);
								}
							}else{
								// printf("GOING TO %d %d. NOT HOLE\n",nrow,ncol);
								ishole = false;
							}
						}
					}
					// printf("isHole: %d\tsymb : %d\n",ishole,symb);
					if(ishole){
						holes[symb]++;
					}
				}
			}
		}
		vector<char> symlist;
		for(int i = 0 ; i < (int)holes.size() ;i++){
			switch(holes[i]){
				case 0: symlist.push_back('W'); break;
				case 1: symlist.push_back('A'); break;
				case 2: symlist.push_back('K'); break;
				case 3: symlist.push_back('J'); break;
				case 4: symlist.push_back('S'); break;
				case 5: symlist.push_back('D'); break;
			}
		}
		sort(symlist.begin(), symlist.end());
		printf("Case %d: ", ccount++);
		fprintf(pFile,"Case %d: ", ccount - 1);
		for(int i = 0 ; i < (int) symlist.size() ; i++){
			printf("%c", symlist[i]);
			fprintf(pFile,"%c", symlist[i]);
		}
		printf("\n");
		fprintf(pFile,"\n");
	}

	fclose(pFile);
	return 0;
}