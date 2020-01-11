#include <bits/stdc++.h>
using namespace std;
int main(){
	string inp;
	cin >> inp;
	int ctr = 0;
	sort(inp.begin(), inp.end());
	do{
		cout << inp << endl;
		ctr++;
	}while(next_permutation(inp.begin(), inp.end()));
	cout << "Total permutations: " << ctr << endl;
}