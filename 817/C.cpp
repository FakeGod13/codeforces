#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

const int N = 1000;

void solve(){
	unordered_map<string,int> hash;
	int n; cin >> n;
	string man[3][N];
	for(int i=0; i<3; i++){
		for(int j=0; j<n; j++){
			string s; cin >> s;
			man[i][j] = s;
			hash[s]++;
		}
	}
	for(int i=0; i<3; i++){
		if(i) cout << ' ';
		int sum = 0;
		for(int j=0; j<n; j++){
			int num = hash[man[i][j]];
			if(num==1) sum += 3;
			else if(num==2) sum += 1;
		}
		cout << sum;
	}
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) solve();
	return 0;
}
