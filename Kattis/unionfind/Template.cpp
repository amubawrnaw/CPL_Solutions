#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

class UnionFind {
public:
vi p, rank, size;
UnionFind(int n) {
p.assign(n,0);
rank.assign(n,0);
size.assign(n,1);
for(int i = 0; i < n; i++) { p[i] = i; }
}
void unionSet(int i, int j) {
if(!isSameSet(i,j)) {
int x = findSet(i), y = findSet(j);
if(rank[x] > rank[y]) {
p[y] = x;
} else {
p[x] = y;
if(rank[x] == rank[y]) { rank[y]++; }
}
size[x]+=size[y];
size[y] = size[x];
}
}
int findSet(int i) {
if(p[i] != i) {
p[i] = findSet(p[i]);
}
return p[i];
}
bool isSameSet(int i, int j) { return findSet(i) == findSet(j);}
};


int
main() {
	int n, q;
	scanf("%d %d", &n, &q);
	UnionFind ufds = UnionFind(n);

	for (int i = 0; i < q; i++) {
		getchar();
		char cmd;
		int a, b;
		scanf("%c %d %d", &cmd, &a, &b);
		if (cmd == '?') {
			printf("%s\n", ufds.isSameSet(a, b) ? "yes" : "no");
		} else {
			ufds.unionSet(a, b);
		}
	}

	return 0;
}