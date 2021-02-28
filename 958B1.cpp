#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main(){
	ll t,n,m,q;
	cin>>t;
	t--;
	map<int, int> map;
	while(t--){
		cin>>q>>m;
		if(map.count(q) == 0){
			map[q] = 1;
		}else{
			map[q]++;
		}

		if(map.count(m) == 0){
			map[m] = 1;
		}else{
			map[m]++;
		}
	}

	int cnt = 0;

	for(auto q:map){
		if(q.second == 1){
			cnt++;
		}
	}

	cout<<cnt;
}