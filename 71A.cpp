#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll t;
	cin>>t;
	string s;
	while(t--){
		cin>>s;
		string res="";
		if(s.size()>10){
			res = res+s[0];
			int q=s.size()-2;
			res+=to_string(q);
			res+=s[s.size()-1];
			cout<<res<<"\n";

		}else{
			cout<<s<<"\n";
		}
	}
}
