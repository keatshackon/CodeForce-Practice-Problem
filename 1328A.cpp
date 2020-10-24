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
		}else if(a<b){
			cout<<b-a<<"\n";
		}else{
			while(a%b != 0){
				c++;
				a++;
			}
			cout<<c<<"\n";	
		}

		
		
	}
}