#include<iostream>

using namespace std;

typedef long long LL;

int n,m,xy[210][210];

int a(int x,int y){
	int res = 0;
	for(int i=1;;i++){
		if(x-i==0||y+i==m+1)break;
		else res += xy[x-i][y+i];
	}
	return res;
}
int b(int x,int y){
	int res = 0;
	for(int i=1;;i++){
		if(x-i==0||y-i==0)break;
		else res += xy[x-i][y-i];
	}
	return res;
}
int c(int x,int y){
	int res = 0;
	for(int i=1;;i++){
		if(x+i==n+1||y+i==m+1)break;
		else res += xy[x+i][y+i];
	}
	return res;
}

int d(int x,int y){
	int res = 0;
	for(int i=1;;i++){
		if(x+i==n+1||y-i==0)break;
		else res += xy[x+i][y-i];
	}
	return res;
}

void solve(){
	cin >> n >> m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin >> xy[i][j];
	int max_ = 0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			int res = xy[i][j];
			res += a(i,j);
			res += b(i,j);
			res += c(i,j);
			res += d(i,j);
			max_ = max_>res?max_:res;
		}
	}
	cout << max_ << endl;
	return;
}

int main()
{
	int t; cin >> t;

	while(t--)solve();

	return 0;
}
