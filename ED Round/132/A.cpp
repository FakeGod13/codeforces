#include<iostream>

using namespace std;

void solve(){
	int x; cin >> x;
	int door[4] = {0}; for(int i=1;i<=3;i++) cin >> door[i];
	int count = 0;
	for(int i=0; i<3; i++){
		if(x) count++;
		else break;
		x = door[x];
	}
	if(count==3) cout << "YES\n";
	else cout << "NO\n";
}

int main(){
	int t; cin >> t;
	while(t--) solve();
	return 0;
}
