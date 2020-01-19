#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	//freopen("out.txt","wt",stdout);
	float T, temp;
	int nCtr;
	scanf("%f%d",&T, &nCtr);
	T+=0.0001;
	multiset<double> pq;
	for(int i = 0; i < nCtr; i++) {
		scanf("%f", &temp);
		pq.insert(temp);
	}
	int cuts = 0;
	//printf("%f %f %f", *(pq.rbegin()), *(pq.begin()), abs(*(pq.rbegin()) / *(pq.begin())-T));
	while(fabs(*(pq.begin()) / *(pq.rbegin())-T)>0.0001){
		double curr = *(pq.rbegin());
		printf("%f\n",fabs(*(pq.rbegin()) / *(pq.begin())));
		pq.erase(curr);
		pq.insert(curr/2.0);
		pq.insert(curr/2.0);
		cuts++;
	}
	printf("%d", cuts);
	return 0;
}