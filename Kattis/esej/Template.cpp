#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	string arr = "abcdefghijklnop";
	for(int i = 0 ; i < b; i++){
		if(i!=0) printf(" ");
		cout << arr;
		next_permutation(arr.begin(), arr.end());
	}
	return 0;
}