#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;

void solve(){
	int n,m; cin >> n >> m;
	string s[55]; int min_ = 10e3+10;
	for(int i=1;i<=n;i++) cin >> s[i];
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			int sum = 0;
			for(int k=0;k<m;k++) 
				sum += abs(s[i][k]-s[j][k]);
			min_ = min_<sum?min_:sum;
		}
	}
	cout << min_ << endl;
	return;
}

int main()
{
	int t; cin >> t;

	while(t--) solve();

	return 0;
}
