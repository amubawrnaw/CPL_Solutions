#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int LCS(string s1, string s2){
	int arr[s1.length()+1][s2.length()+1];
	for(int i = 0 ; i < s1.length() +1; i++) arr[i][0] = 0;
	for(int i = 0 ; i < s2.length() +1; i++) arr[0][i] = 0;

	for(int i = 1 ; i < s1.length()+1 ; i++){
		for(int k = 1 ; k < s2.length()+1 ; k++){
			if(s1[i-1] == s2[k-1]){
				arr[i][k] = arr[i-1][k-1]+1;
			}else{
				arr[i][k] = max(arr[i-1][k], arr[i][k-1]);
			}
		}
	}
	// for(int i = 0 ; i < s1.length() +1; i++){
	// 	for(int k = 0 ; k < s2.length() +1; k++){
	// 		printf("%d, ", arr[i][k]);
	// 	}
	// 	printf("\n");
	// }
	return arr[s1.length()][s2.length()];
}

bool cmp(ii i1, ii i2){
	if(i1.second == i2.second) return i1.first < i2.first;
	else return i1.second > i2.second;
}

int main() {
	//freopen("out.txt","wt",stdout);
	string abyss, in;
	int chants;
	string arr[] = {"Nyarlathotep\n", "Shub-Niggurath\n", "Yog-Sothoth\n"};

	cin >> abyss;
	while(abyss.compare("end")!=0){
		int Umharvatu = 0;
		ii nyar(0,0);
		ii shub(1,0);
		ii yog(2,0);
		ii iarr[]={nyar,shub,yog};
		scanf("%d", &chants);
		while(chants--){
			cin >> in;
			if(abyss.compare(in) == 0){
				iarr[2].second++;
			}else{
				int val = LCS(abyss, in);
				//printf(">%d\n", val);	
				if(val <= 10)iarr[0].second++;
				else iarr[1].second++;
			}
			//printf("%d %d %d", nyar, shub, yog);
		// }
		// if(nyar < shub && nyar < yog){
		// 	if(shub == yog || shub > yog){
		// 		printf("Shub-Niggurath\n");
		// 	}else printf("Yog-Sothoth\n");
		// }else if(shub < nyar && shub < yog){
		// 	if(nyar == yog || nyar > yog) printf("Nyarlathotep\n");
		// 	else printf("Yog-Sothoth\n");

		// }else if(yog < nyar && yog < shub){
		// 	if(nyar == shub || nyar > shub) printf("Nyarlathotep\n");
		// 	else printf("Shub-Niggurath\n");
		// }else if (yog == nyar && nyar == shub){
		// 	printf("Nyarlathotep\n");
		}
		sort(iarr, iarr+3, cmp);
		cout << arr[iarr[0].first];
		cin >> abyss;
	}
	return 0;
}