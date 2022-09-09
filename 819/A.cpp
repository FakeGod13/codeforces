#include<iostream>
#include<algorithm>

using namespace std;

const int N = 2000 + 5;

void solve(){
	int n; cin >> n;	
	int a[N]; for(int i=1; i<=n; i++) cin >> a[i]; 
	int ans = 0;
	for(int i = 1; i<=n; i++){
		if(i>1 && a[i-1]-a[i]>ans) ans = a[i-1]-a[i];
		if(a[i]-a[1]>ans) ans = a[i]-a[1];
		if(a[n]-a[i]>ans) ans = a[n]-a[i];
	}
	cout << ans << endl;
}

int main(){
	int t; cin >> t;
	while(t--) solve();
	return 0;
}
