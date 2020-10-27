#include<bits/stdc++.h>
using namepscae std;
typedef long long ll;

int main()
{
	ll t,n;
	while(t--){
		cin>>n;
		std::vector<int> v;
		ll a;
		for(int i=0;<n;i++){
			cin>>a;
			v.push_back(a)
		}
		if(v.size() == 1 ){
			cout<<1<<"\n";
		}else{
			int res = 0;
			for(int i=1;i<v.size()-1;i++){
				if(v[i] >= v[i-1]){
					res++;
				}
			}
			cout<<res<<"\n";
		}

	}
}