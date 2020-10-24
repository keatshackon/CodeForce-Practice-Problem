#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll t,a,b,c=0;
	
	cin>>t;
	while(t--){
		cin>>a>>b;
		c=0;
		if(a%b == 0){
			cout<<0<<"\n";
		}else{
			cout<<b-a%b<<"\n";
		}

		
		
	}
}