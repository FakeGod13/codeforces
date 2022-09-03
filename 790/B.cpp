#include<iostream>

using namespace std;

typedef long long LL;

void solve(){
	int n; cin >> n;
	LL min_ = 10e7+10, sum = 0;
	for(int i=0;i<n;i++){
		LL a; cin >> a; sum += a;
		min_ = a < min_ ? a:min_;
	}
	cout << sum-min_*n << endl;
	return;
}

int main()
{
	int t; cin >> t;

	while(t--) solve();

	return 0;
}
