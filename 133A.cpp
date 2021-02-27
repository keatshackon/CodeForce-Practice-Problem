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

	string s;
    cin>>s;
    m = 0;
    for(int i=0;i<s.length();i++){
        if(s[i] == 'H' || s[i] =='Q' || s[i] == '9'){
            cout<<"YES";
            m = 1;
            break;
        }
    }
    if(m != 1){
        cout<<"NO";
    }
    return 0;
}