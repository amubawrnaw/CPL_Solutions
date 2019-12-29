#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	//freopen("out.txt","wt",stdout);
	int len, w;
	scanf("%d %d", &len, &w);
	
	if(w<len || (len * 26) < w)
		printf("impossible");
	else{
		string s = "";
		if(w % len == 0){
			int lmao = w / len;
			for(int i = 0 ; i < len ; i++)
				s+= 'a' + lmao -1;
		}else{
			int loop = floor(w / len);
			int rem = 0;

			if(w - (loop * (len-1)) > 26){
				for(int i = 0 ; i < len-2 ; i++){
					s+= 'a' + loop - 1;
					rem+= loop;
				}
				int rem2 = w - (loop * (len-1));
				printf("%d:  %d %d", rem2, rem2/2 - 1, rem2 - (rem2/2 - 1) - 1);
				s+='a'+ rem2/2 - 1;
				s+='a'+ rem2 - (rem2/2 - 1) - 1;
			}else{
				for(int i = 0 ; i < len-1 ; i++){
					s+= 'a' + loop - 1;
					rem+= loop;
				}
				s+='a'+ (w - rem) - 1;
			}
			
		}
		cout << s;
	}
}
