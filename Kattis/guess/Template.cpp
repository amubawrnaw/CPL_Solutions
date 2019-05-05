#include <bits/stdc++.h>
using namespace std;
int main() {
	string line;
	printf("500\n");
	int low = 1, hi = 1001, mid = 500;
	cin >> line;
	while(line.compare("correct")!=0){
		if(line.compare("lower")==0)
			hi = mid;
		else
			low = mid;
		mid = (hi+low)/2;
		printf("%d\n",mid);
		cout << flush;
		cin >> line;
	}
	return 0;
}