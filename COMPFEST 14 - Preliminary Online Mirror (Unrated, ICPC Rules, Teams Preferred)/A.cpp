#include<iostream>

using namespace std;

void solve(){
	int N,M; cin >> N >> M;
	int ans = 0;
	if(M>1){
		ans = M == 2 ? 1:M-1;
		ans *= N;
	}else{
		if(N>1){
		
		}
	}
	cout << ans << endl;
}

int main(){
	int t = 1;// cin >> t;
	while(t--) solve();
	return 0;
}
