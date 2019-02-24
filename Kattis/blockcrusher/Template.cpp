#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

void dijkstra(vector<string> &arr, vector<vector<int> > &weights, vector<string> &dir, int xmax, int ymax){
	vector<int> explored;
	priority_queue<pair<int,int> > pq;
	int x=2;
	int y=1;

	for(int i = 0 ; i < arr[0].size();i++){

	}

}

int main() {
	//freopen("out.txt","wt",stdout);
	string line;
	int x,y;
	
	while(scanf("%d%d",&y,&x),x&&y) {
		vector<string> arr;
		vector<vector<int> > weights(y, vector<int>(x, 9999999));
		vector<string> dir;

		for(int i = 0 ; i < y ; i++){
			cin >> line;
			for(int k = 0 ; k < x ; k++){
				weights[];
			}
			arr.push_back(line);
		}

	}
	return 0;
}