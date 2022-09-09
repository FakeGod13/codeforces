#include<iostream>
#include<algorithm>

using namespace std;

const int n = 1e8+5;

int x[n];

int main(){
	int N; cin >> N;
	int i=0;
	for(int a = 1; a<1000; a++){
		for(int b = a+1; b<1000; b++){
			x[i] = b*b - a*a;
			i++;
		}
	}
	sort(x,x+50);
	for(int num:x) cout << num << endl;
	cout << x[N-1];
}
