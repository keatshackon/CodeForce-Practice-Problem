#include<bits/stdc++.h>
using namespace std;
#define ll long long 


ll fun(std::vector<ll> v){


	if(v.size() == 1){
		return v[0];
	}

	ll  gc = __gcd(v[0],v[1]);
	for(int i = 2;i < v.size();i++){
		gc = __gcd(gc,v[i]);
	}

	for(auto q:v){
		if(q == gc){
			return gc;
		}
	}
	return -1;

}



int main(){
	ll t,m,n;
	cin>>n;
	std::vector<ll> v;
	while(n--){
		cin>>m;
		v.push_back(m);
	}

	cout<<fun(v);

	return 0;


}
