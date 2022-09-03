#include<iostream>
#include<string>

using namespace std;

bool cheak(int x){
	int s[6], l=0;
	for(;x;l++){
		s[l] = x%10;
		x /= 10;
	}
	int i=0,j=l-1;
	while(i<j){
		if(s[i]!=s[j]){
			return false;
		}i++,j--;
	}
	return true;
}

int main()
{
	int t; cin >> t;

	while( t-- ){
		int n; cin >> n;	
	
	}

	return 0;
}
