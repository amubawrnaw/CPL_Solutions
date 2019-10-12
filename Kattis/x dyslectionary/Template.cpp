#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef pair<int,ii> iii;

bool cmp(string s1, string s2){
	char c1 = s1[s1.length()-1];
	char c2 = s2[s2.length()-1];
	if(c1 == c2){
		return s1.length() < s2.length();
	}else{
		return c1<c2;
	}
}

int main() {
	//freopen("out.txt","wt",stdout);
	string s;
	vector<string> vec;
	int maxlen;
	bool f = true;
	while(getline(cin,s)){
		if(f) f=false;
		else printf("\n\n");
		vec.clear();
		vec.push_back(s);
		maxlen = s.length();
		
		while(getline(cin,s)){
			
			if(!s.empty()){
				if(s.length() > maxlen) maxlen = s.length();
				vec.push_back(s);
			}
			else
				break;
		}
		sort(vec.begin(), vec.end(), cmp);
		for(int i = 0 ; i < int(vec.size() ); i++){
			for(int k = 0 ; k < maxlen - int(vec[i].length() ) ; k++) printf(" ");
			cout << vec[i];
			if(i!=int(vec.size())-1) printf("\n");
		}
	}
	return 0;
}
