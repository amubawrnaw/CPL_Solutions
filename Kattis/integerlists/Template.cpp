#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	//freopen("out.txt","wt",stdout);
	string line;
	bool end;
	int nCtr,g, len,temp;
	scanf("%d",&nCtr);
	for(int i = 0; i < nCtr; i++) {
		end = false;
		bool succ = true;
		deque<int> dq;
		cin >> line;
		scanf("%d%c%c",&len, &g, &g);

		for(int k = 0 ; k < len ; k++){
			scanf("%d%c",&temp, &g);
			dq.push_back(temp);
		}
		if(len == 0) scanf("%c", &g);
		//use #R to determine if delet front or back, then rev at end
		for(int k = 0 ; k < line.length() ; k++ ){
			if(line[k] == 'R'){
				end = !end;
			}else{
				if(!dq.empty()){
					if(end){
						dq.pop_back();
					}else{
						dq.pop_front();
					}
				}else{
					printf("error\n");
					succ = false;
					break;
				}
			}
		}
		if(succ){
			if(!dq.empty()){
				if(!end){
					printf("[%d", dq.front());
					dq.pop_front();
				}
				else{
					printf("[%d", dq.back());
					dq.pop_back();
				} 
				while(!dq.empty()){
					if(!end){
						printf(",%d",dq.front());
						dq.pop_front();
					} 
					else{
						printf(",%d", dq.back());
						dq.pop_back();
					} 
				}
				printf("]\n");
			}else{
				printf("[]\n");
			}
			
		}
	}
	return 0;
}