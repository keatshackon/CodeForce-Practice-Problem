#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll t,a,b;
	cin>>a>>b;
	int c = (6- max(a,b))+1;
	
	if(c == 0){
		cout<<"0/1";
	}else if(c == 1){
		cout<<"1/6";
	}else if(c == 2){
		cout<<"1/3";
	}else if(c == 3){
		cout<<"1/2";
	}else if(c == 4){
		cout<<"2/3";
	}else if(c == 5){
		cout<<"5/6";
	}else if(c == 6){
		cout<<"1/1";
	}
}