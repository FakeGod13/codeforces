#include<iostream>
#include<algorithm>

using namespace std;

typedef long long ll;

const int n = 1e5+5;

void solve(){
	ll N,D; cin >> N >> D;
	ll P[n]; for(ll i=0; i<N; i++) cin >> P[i];
	sort(P,P+N);
	ll ans = 0, cnt = 0, sum = N;
	for(ll i = N-1; sum>0;){
		if(P[i]*(cnt+1) > D){
			cnt = 0;
			i--;
			sum--;
			ans++;
		}else cnt++, sum--;
	}
	cout << ans;
}

int main(){
	int t;
	// cin >> t;
	t = 1; 
	while(t--) solve();
	return 0;
}
