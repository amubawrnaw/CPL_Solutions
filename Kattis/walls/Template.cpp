#include <bits/stdc++.h>
using namespace std;

typedef pair<double,double> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;


ii cranes[35];
ii centers[4];
int l,w,n,r;
bool reachable(ii center, ii crane){
	double x = (center.first - crane.first) * (center.first - crane.first);
	double y = (center.second - crane.second) * (center.second - crane.second);
	double dist = sqrt(x+y);
	if((r*1.0) >= dist) return true;
	return false;
}

int reach(int x, ii crane){
	for(int i = 0 ; i < 4 ; i++){
		if(reachable(centers[i], crane)){
			//toggle that thingy on;
			x|=1<<i;
		}
	}
	return x;
}

int main() {
	scanf("%d %d %d %d", &l,&w,&n,&r);
	ii temp[4] = {make_pair(-l/2.0,0),make_pair(l/2.0,0),make_pair(0,-w/2.0),make_pair(0,w/2.0)};
	copy(temp, temp + 4, centers);

	int x,y;
	for(int i = 0 ; i < n ; i++){
		scanf("%d %d", &x, &y);
		cranes[i] = make_pair(x,y);
	}

	//check if kaya ng 1
	int ctr = 0;
	for(int i = 0 ; i < n ; i++){
		ctr = reach(0, cranes[i]);
		if(ctr == (1<<4)-1){
			printf("1");
			return 0;
		}
	}
	//check if kaya ng 2
	for(int i = 0 ; i < n ; i++){
		for(int k = i+1 ; k < n ; k++){
			ctr = reach(0, cranes[i]);
			ctr = reach(ctr, cranes[k]);
			if(ctr == (1<<4)-1){
				printf("2");
				return 0;
			}
		}
	}
	//check if kaya ng 3
	for(int i = 0 ; i < n ; i++){
		for(int k = i+1 ; k < n ; k++){
			for(int l = k+1 ; l < n ; l++){
				ctr = reach(0, cranes[i]);
				ctr = reach(ctr, cranes[k]);
				ctr = reach(ctr, cranes[l]);
				if(ctr == (1<<4)-1){
					printf("3");
					return 0;
				}
			}
		}
	}
	//check if kaya ng 4
	for(int i = 0 ; i < n ; i++){
		for(int k = i+1 ; k < n ; k++){
			for(int l = k+1 ; l < n ; l++){
				for(int e = l+1 ; e < n ; e++){
					ctr = reach(0, cranes[i]);
					ctr = reach(ctr, cranes[k]);
					ctr = reach(ctr, cranes[l]);
					ctr = reach(ctr, cranes[e]);
					if(ctr == (1<<4)-1){
						printf("4");
						return 0;
					}
				}
				
			}
		}
	}
	printf("Impossible");
	return 0;
}
