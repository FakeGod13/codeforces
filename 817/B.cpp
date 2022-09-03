#include<iostream>
#include<string>

using namespace std;

void solve(){
	int n;  cin >> n;
	string a,b; cin >> a >> b;
	for(int i=0; i<n; i++){
		if(a[i]=='R'||b[i]=='R'){
			if(a[i]!=b[i]){
				cout << "NO\n";
				return;
			}
		}
	}
	cout << "YES\n";
}

int main(){
	int t; cin >> t;
	while(t--) solve();
	return 0;
}
