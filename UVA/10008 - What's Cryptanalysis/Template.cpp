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
#include <cctype>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	int arr[26];
	for(int i = 0 ; i <= 26 ; i++){
		arr[i] = 0;
	}
	char dummy;
	int nCtr;
	string s;
	scanf("%d%c",&nCtr, &dummy);
	for(int i = 0; i < nCtr; i++) {
		getline(cin, s);
		for(int i = 0 ; i < s.length() ; i++){
			//-65 so A is at index 0
			if(toupper(s[i])>='A' || toupper(s[i]) <= 'Z')
				arr[toupper(s[i])-65]++;
		}
	}
	int max, mind;
	for(int i = 0 ; i < 27 ; i++){
		max = 0;
		mind = 0;
		for(int k = 0 ; k < 27 ; k++){
			if(max < arr[k]){
				mind = k;
				max = arr[k];
			}
		}
		arr[mind] = -1;
		if(max != 0){
			printf("%c %d\n", mind+65, max);
		}
	}
}