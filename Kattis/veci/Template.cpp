#include <bits/stdc++.h>

using namespace std;

int main(){
	string line;
	cin >> line;
	if(next_permutation(line.begin(), line.end())){
		printf("%s", line.c_str());
	}else{
		printf("0");
	}
}
