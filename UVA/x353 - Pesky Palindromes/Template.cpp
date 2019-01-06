#include <cstdio>
#include <cmath>
#include <cstring>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>
#include <queue>
#include <bitset>
#include <map>
#include <stack>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	freopen("out.txt","w",stdout);

	string n;
	while(getline(cin, n)) {
		cout << "The string '" << n << "' contains " << n.length() << " palindromes.\n";
	}
	return 0;
}