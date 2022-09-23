#include<iostream>
#include<cmath>

using namespace std;

void solve(){
    int a,b,c; cin >> a >> b >> c;
    int ans = 0;
    if( a < abs(b-c)+c) ans = 1;
    else if( a > abs(b-c)+c) ans = 2;
    else ans = 3;
    cout << ans << endl;
}

int main(void){
    int t; cin >> t;
    while(t--) solve();
    return 0;
}