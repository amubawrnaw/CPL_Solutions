#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

bitset<1000001> arr1;
bitset<1000001> arr2;
int main() {
	//freopen("out.txt","wt",stdout);
	int p1, p2, temp;
	arr1.reset();
	arr2.reset();
	scanf("%d",&p1);
	int f1, f2;
	for(int i = 0; i < p1; i++) {
		scanf("%d", &temp);
		if(i==0) f1=temp;
		arr1.set(temp);
	}
	scanf("%d",&p2);
	for(int i = 0; i < p2; i++) {
		scanf("%d", &temp);
		if(i==0) f2=temp;
		arr2.set(temp);
	}
	int ans = 0;
	int curr = (f1<f2?0:1);
	for(int i = 1 ; i < 1000001 ; i++){
		if(curr = 0){
			if(arr1.test(i)){
				curr = 1;
				ans++;
			}
		}else{
			if(arr2.test(i)){
				curr = 0;
				ans++;
			}
		}
	}
	printf("%d", ans);


	return 0;
}