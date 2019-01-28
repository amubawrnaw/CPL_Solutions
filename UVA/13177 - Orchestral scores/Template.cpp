#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;
bool comp(const pair<int,int> &a, const pair<int, int> &b){
	return (a.second < b.second);
}
int main() {
	//freopen("out.txt","wt",stdout);
	string line;
	int score, inst, temp;
	while(scanf("%d",&score) == 1) {
		scanf("%d", &inst);
		priority_queue<iii> pq;
		for(int i = 0 ; i < inst ; i++){
			scanf("%d", &temp);
			pq.push(make_pair(temp,make_pair(temp,1)));
		}
		score-=inst;
		while(score>0){
			iii temp = pq.top();
			pq.pop();
			temp.second.second++;
			temp.first = ceil(temp.second.first*1.0/temp.second.second*1.0);
			score--;
			pq.push(temp);
		}
		printf("%d\n", pq.top().first);

		// ii orig[inst];
		// int scores[inst];
		// for(int i = 0 ; i < inst ; i++){
		// 	scanf("%d", &temp);
		// 	orig[i] = make_pair(temp,temp);
		// 	scores[i] = 1;
		// }

		// sort(orig, orig + inst, comp);
		// if(score == inst) printf("%d\n", orig[inst-1].first);
		// else{
		// 	score-=inst;
		// 	while(score>0){
		// 		sort(orig, orig + inst, comp);
		// 		scores[inst-1]++;
		// 		orig[inst-1].second = ceil(orig[inst-1].first*1.0/scores[inst-1]*1.0);
		// 		score--;
		// 	}
		// 	sort(orig, orig+inst, comp);
		// 	printf("%d\n", orig[inst-1].second);
		// }
	}
	return 0;
}