/*                  #####################################
                    #           Nickname:keats          #
                    #           User:keats92            #
                    #####################################            
*/

#include <bits/stdc++.h> 
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define pb push_back
#define N 10001
#define lb lower_bound
#define M 100000000
#define ub upper_bound
#define mp make_pair
#define LD long double
#define f first
#define se second 

int main() {
    fast
    #ifdef _DEBUG
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    ll q,x,y,z,i,j,k,l,m,t,r,d,n,a,b,c;

	
		cin>>l>>k;

		if(l%2 == 0){
			a = l/2;
			b = a;

			if(k <= a){
				cout<<(2*k)-1<<"\n";
			}else{
				k = k - a;
				cout<<(2*k)<<"\n";
			}

		}else{
			a = l/2+1;
			b = l/2;

			if(k <= a){
				cout<<(2*k)-1<<"\n";
			}else{
				k = k - a;
				cout<<(2*k)<<"\n";
			}
			
		
	}

    return 0;
}