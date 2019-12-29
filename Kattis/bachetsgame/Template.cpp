#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int memo[1000001][2];
        

int main() {
    //freopen("out.txt","wt",stdout);
    int n,m;
    while(scanf("%d %d",&n,&m)!=EOF){
        int arr[m];
        for(int i = 0 ; i <= n ; i++){
            memo[i][0] = memo[i][1] = -1;
        }
        for(int i = 0 ; i < m ; i++){
            scanf("%d", &arr[i]);
            memo[arr[i]][0] = 0;
            memo[arr[i]][1] = 1;
        }
        for(int i = 0 ; i <= n ; i++){
            for(int j = 0 ; j < 2 ; j++){
                if(memo[i][j] == -1){
                    bool win = false;
                    for(int k = 0 ; k < m ; k++){
                        if(i - arr[k] > 0){
                            win |= memo[i-arr[k]][abs(j-1)] == j;
                        }
                    }
                    memo[i][j] = win ? j : abs(j-1);
                }
            }
        }
        cout <<(memo[n][0] == 0 ? "Stan wins" : "Ollie wins")  << endl;
    }
    return 0;
}