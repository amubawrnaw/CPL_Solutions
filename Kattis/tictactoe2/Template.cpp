#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;
string str[3];

int winner(char C){
    int cnt = 0;
    for(int i = 0 ; i < 3 ; i++){
        if(C == str[i][0] && str[i][1] == C && C == str[i][2]) cnt++;
        if(C == str[0][i] && str[1][i] == C && C == str[2][i]) cnt++;
    }
    if(C == str[0][0] && C == str[1][1] && C == str[2][2]) cnt++;
    if(C == str[2][0] && C == str[1][1] && C == str[0][2]) cnt++;
    return cnt;
}


int main() {
    //freopen("out.txt","wt",stdout);
    string t;
    int cnt;
    scanf("%d", &cnt);
    while(cnt-->0){
        int x = 0;
        int o = 0;
        for(int i = 0 ; i < 3 ; i++) {
            cin>>str[i];
            for(int k = 0 ; k < 3 ; k++){
                if(str[i][k]=='X') x++;
                if(str[i][k]=='O') o++;
            }
        }
        if(!(winner('X')&&winner('O'))){
            if(winner('O') && x==o){
                printf("yes\n");
            }else if(winner('X') && x==o+1){
                printf("yes\n");
            }else if(!winner('X') && !winner('O') && (x==o || x==o+1)){
                printf("yes\n");
            }else printf("no\n");
        }else{
            printf("no\n");
        }
    }
}