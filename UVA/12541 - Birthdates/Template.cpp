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
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	FILE *pFile = fopen("out.txt","w");

	int nCtr;
	scanf("%d",&nCtr);
	string name, nmax, nmin;
	int max = -1;
	int min = 99999999;
	int day, month, year;
	int val;
	for(int i = 0; i < nCtr; i++) {
		cin >> name;
		scanf("%d %d %d",&day, &month, &year);
		val = year *10000;
		val +=month * 100;
		val += day;
		if(val < min){
			nmin = name;
			min = val;
		}
		if(val > max){
			nmax = name;
			max = val;
		}
	}
	cout << nmax << "\n" << nmin <<"\n";
	return 0;
}