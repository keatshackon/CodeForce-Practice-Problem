#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll t,x = 0;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		if(s[1] == '+'){
			x++;
		}else{
			x--;
		}
	}
	cout<<x<<"\n";
}
