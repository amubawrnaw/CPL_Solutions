#include <cstdio>
#include <cmath>
#include <cstring>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	FILE *pFile = fopen("out.txt","w");
	int n;
	int m[1000001];
	m[0] = 1;
	for(int i = 1; i <= 1000000 ; i++){
		int &temp = m[i];
		temp = (m[(int)floor(i-sqrt(i))] % 1000000);
		temp = (temp + m[(int)floor(log(i))] % 1000000) % 1000000;
		temp = (temp + m[(int)floor(i * pow(sin(i),2.0))] % 1000000) % 1000000;
	}
	while(scanf("%d",&n),n!=-1) {
		cout << m[n] << "\n";
	}
	fclose(pFile);
	return 0;
}