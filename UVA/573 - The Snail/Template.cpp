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
	int h,u,d,f;
	while(scanf("%d %d %d %d",&h, &u, &d, &f),h) {
		int day = 1;
		double ch = 0;
		double climb = u;
		double fat = climb*f/100;
		double desc = d;
		while(ch>=0 && ch <= h){
			ch+=climb;
			if(ch > h) break;
			ch-=desc;
			climb -= fat;
			if(ch < 0) break;
			if(climb<0) climb = 0;
			day++;
		}
		if(ch<0) printf("failure on day %d\n", day);
		else printf("success on day %d\n", day);
	}
	return 0;
}