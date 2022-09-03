#include<iostream>

using namespace std;

typedef long long LL;

const int N = 100010;

int n,m;
LL a[N],left_[N],right_[N];

void solve(){
	int s,t; cin >> s >> t;
	LL ans = 0;
	if(s < t) ans = right_[t]-right_[s];
	else ans = left_[t]-left_[s];
	//cout << left_[t] << ' ' << left_[s] << endl;
	cout << ans << endl;
}

int main(){
	cin >> n >> m;
	for(int i=1;i<=n;i++) cin >> a[i];
	right_[1] = 0;
	for(int i=1;i<=n-1;i++){
		right_[i+1] = right_[i];
		if(a[i]-a[i+1]>0){
			right_[i+1] += a[i]-a[i+1];
		}
	}
	left_[n] = 0; 
	for(int i=n;i>1;i--){
		left_[i-1] = left_[i];
		if(a[i]-a[i-1]>0){
			left_[i-1] += a[i]-a[i-1];
		}
		//cout << "left[" << i << "] = " << l << endl; 
	}
	while(m--) solve();
	return 0;
}
