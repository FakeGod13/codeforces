#include<iostream>
#include<string>

using namespace std;

int main()
{
	int t; cin >> t;

	while( t-- ){
		string s; cin >> s;

		int A = 0,B = 0;
		int l = s.size();

		if( l%2 ){
			if(s[0]>s[l-1]) {
				for(int i=0;i<l-1;i++){
					A += s[i]-'a'+1;
				}
				B += s[l-1]-'a'+1;
			}else{
				for(int i=1;i<l;i++)
					A += s[i]-'a'+1;
				B += s[0]-'a'+1;
			}
		}else{
			for(int i=0;i<l;i++)
				A += s[i]-'a'+1;
		}

		if(A>B) cout << "Alice " << A-B << '\n';
		else cout << "Bob " << B-A << '\n';
	}

	return 0;
}
