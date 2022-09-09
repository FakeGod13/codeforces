#include<iostream>

using namespace std;

void solve(){
	int n; cin >> n;
	for(int i=1; i<n; i++){
		if(i-1) cout << ' ';
		cout << i;
	}
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) solve();
	return 0;
}
