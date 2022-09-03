#include<iostream>

using namespace std;

void solve(){
	int n; cin >> n;
	int a[100]; for(int i=0; i<n; i++) cin >> a[i];
	for(int i=1; i<n; i++){
		if(a[i]%a[0]){
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
	return;
}

int main(){
	
	int t; cin >> t;

	while(t--) solve();

	return 0;
}
