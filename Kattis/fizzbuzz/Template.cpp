#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
	int x,y,z;
	scanf("%d%d%d", &x,&y,&z);
	for(int i = 1 ; i <= z ; i++){
		if(i%x==0 && i%y==0){
			printf("FizzBuzz\n");
		}else if(i%x == 0){
			printf("Fizz\n");
		}else if(i%y == 0){
			printf("Buzz\n");
		}else{
			printf("%d\n",i);
		}
	}
	return 0;
}