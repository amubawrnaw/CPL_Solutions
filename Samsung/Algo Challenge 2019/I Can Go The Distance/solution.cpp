#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

double M(ii x, ii y){
	return abs(x.first - y.first) + abs(x.second - y.second);
}

double E(ii x, ii y){
	int t1 = x.first - y.first;
	int t2 = x.second - y.second;
	return sqrt(t1*t1 + t2*t2);
}

int main() {
	//freopen("out.txt","wt",stdout);
	int tc;
	scanf("%d", &tc);
	int N,X,Y;
	for(int c = 1 ; c <= tc ;c++){
		vii v;
		scanf("%d %d %d", &N, &X, &Y);
		int t1, t2;
		while(N--){
			scanf("%d %d", &t1, &t2);
			v.push_back(make_pair(t1,t2));
		}
		N = v.size();
		for(int i = 0 ; i < N - 1 ; i++){
			for(int k = i+1 ; k < N ; k++){
				double m = M(v[i],v[k]);
				double e = E(v[i],v[k]);
				if(m == X && e == Y){
					if(v[i].first < v[k].first){
						printf("Case #%d: (%d,%d) (%d,%d)\n", c, v[i].first, v[i].second, v[k].first, v[k].second);
					}else if(v[i].first == v[k].first){
						if(v[i].second < v[k].second){
							printf("Case #%d: (%d,%d) (%d,%d)\n", c, v[i].first, v[i].second, v[k].first, v[k].second);
						}else{
							printf("Case #%d: (%d,%d) (%d,%d)\n", c, v[k].first, v[k].second, v[i].first, v[i].second);
						}
					}else{
						printf("Case #%d: (%d,%d) (%d,%d)\n", c, v[k].first, v[k].second, v[i].first, v[i].second);
					}
					break;
				}
			}
		}
	}
	return 0;
}