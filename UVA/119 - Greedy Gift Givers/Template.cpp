#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	//freopen("out.txt","wt",stdout);
	int n;
	map<string, int> m;
	string temp;
	bool first = true;
	while(scanf("%d",&n)==1) {
		m.clear();
		string names[n];
		for(int i = 0 ; i < n ; i++){
			cin >> temp;
			names[i] = temp;
			m[temp] = 0;
		}
		for(int i = 0 ; i < n ; i++){
			string gifter;
			cin >> gifter;
			int amt, gc;
			scanf("%d %d", &amt, &gc);

			int gift;
			if(gc!=0){
				gift = ceil(amt / gc);
				m[gifter] += amt%gc;
				m[gifter] -= amt;
			}
			for(int k = 0 ; k < gc ; k++){
				cin >> temp;
				m[temp]+= gift;
			}
		}

		if(!first) printf("\n");
		else first = false;

		for(int i = 0; i < n ; i++){
			cout << names[i] << " " << m[names[i]] << "\n";
		}
	}
	return 0;
}