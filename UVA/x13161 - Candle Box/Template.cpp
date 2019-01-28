#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	FILE *pFile = fopen("out.txt","w");
	string line;
	double age;
	int riza,theo, dif;
	while(scanf("%d", &dif)==1){
		scanf("%d", &riza);
		scanf("%d", &theo);
		age = 0;
		printf("%d %d %d\n", dif, riza, theo);

		double b = (dif - 1);
		double c = ((dif*dif)-dif)/2.0;
		printf("%lf\n",c);
		c -= 9;
		c -= riza;
		c -= theo;
		age = (-b + (sqrt((b*b) - (4*c))))/2.0;
		age /=2.0;
		printf("%lf\n", age);
	}
	
	fclose(pFile);
	return 0;
}