#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
	ll t,m,n;

	cin>>t;
	m = t;
	t = t*2;
	string s;

	int l = 1;
	while(l <= t){
		string temp = to_string(l);
		s+=temp;
		l++;
	}
	

	cout<<s[m-1];
}