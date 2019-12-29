#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

int main() {
    //freopen("out.txt","wt",stdout);
    string line;

    int r,c;
    
    scanf("%d %d",&r, &c);
    
    string strarr[r];
    string currarr[c];
    
    for(int i = 0; i < r; i++) {
        cin>>strarr[i];
    }
    
    for(int i = 0 ; i < c ; i++){
        currarr[i] = "";
        for(int k = r - 1 ; k >= 0 ; k--){
            currarr[i] += strarr[k][i];
        }
    }
    
    for(int i = 0 ; i < c ; i++) currarr[i]+='a';
    map<string, bool> lmao;
    
    int ans = 0;
    for(int k = 0; k < r ; k++){
        bool b = true;
        lmao.clear();
        for(int i = 0 ; i < c ; i++){
            //string temp = currarr[i]+=strarr[k][i];
            string temp = currarr[i].erase(currarr[i].length()-1);
            currarr[i] = temp;
            //cout << temp << endl;
            if(lmao[temp] == false){    
                lmao[temp] = true;
            }else{
                b = false;
                break;
            }
        }
        if(!b)break;
        ans++;
    }
    printf("%d", ans-1);
    return 0;
}