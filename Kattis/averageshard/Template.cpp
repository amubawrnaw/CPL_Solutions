#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

float smolboi = 0.000000001;

int main() {
    //freopen("out.txt","wt",stdout);
    string line;

    int nCtr;
    scanf("%d",&nCtr);
    for(int i = 0; i < nCtr; i++) {
        ll cc, ec, ans = 0;
        scanf("%d %d", &cc, &ec);
        ll carr[cc], earr[ec];
        for(int i = 0 ; i < cc ; i++) scanf("%lld", &carr[i]);
        for(int i = 0 ; i < ec ; i++) scanf("%lld", &earr[i]);
        
        ll sumc = 0;
        ll sume = 0; 
        
        for(int i = 0 ; i < cc ; i++) sumc+= carr[i];
        for(int i = 0 ; i < ec ; i++) sume+= earr[i];
        
        double avgc = sumc * 1.0 / cc;
        double avge = sume * 1.0 / ec;
        
        for(int i = 0 ; i < cc ; i++){
            double navgc = (sumc-carr[i]) * 1.0 / (cc-1);
            double navge = (sume+carr[i]) * 1.0 / (ec+1);
            
            if((navgc - avgc) > 0 && (navge - avge) > 0) ans++;
        }
        printf("%d\n", ans);
    }
    return 0;
}