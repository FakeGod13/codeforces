#include<iostream>
#include<string>
using namespace std;

void solve(){
	int n; cin >> n;
	if(n!=5){
		cout << "NO\n";
		return;
	}
	string s; cin >> s;
	int T = 0;
	int i = 0;
	int m = 0;
	int u = 0;
	int r = 0;
	for(char c:s){
		if(c == 'T') T++;
		if(c == 'i') i++;
		if(c == 'm') m++;
		if(c == 'u') u++;
		if(c == 'r') r++;
	}
	if(T==1&&i==1&&m==1&&u==1&&r==1){
		cout << "YES\n";
	}else{
		cout << "NO\n";
	}
}

int main(){
	int t; cin >> t;
	while(t--) solve();
	return 0;
}
