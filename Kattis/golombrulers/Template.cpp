#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;
bitset<2002> bs;
int main() {
	//freopen("out.txt","wt",stdout)
	string line;
	while(getline(cin, line)){
		stringstream ss(line);
		vi arr;
		int temp;
		int max = -1;
		while(ss>>temp){
			if(temp > max) max = temp;
			arr.push_back(temp);
		}
		int n = arr.size();
		vi check;
		bs.reset();
		for(int i = 0 ; i < n-1 ; i++){
			for(int k = i+1; k < n ; k++){
				temp = abs(arr[k]-arr[i]);
				if(!bs.test(temp)){
					bs.set(temp);
				}else{
					printf("not a ruler\n");
					goto end;
				}
			}
		}
		
		for(int i = 1 ; i <= max;i++){
			//printf("=%d ", bs.test(i));
			if(!bs.test(i)) check.push_back(i);
			//printf("\n");
		}
		if(check.size() == 0){
			printf("perfect\n");
		}else{
			printf("missing ");
			for(int i = 0 ; i < check.size() ; i++) printf("%d ", check[i]);
			printf("\n");
		}
		end:;
	}
	return 0;
}
