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
    
    ll q,x,y,z,i,k,l,m,t,r,d,n,a,b,c;

    cin>>t;
    while(t--){ 
        int cnt = 0;
        int a = 0;
        int b = 0;
        string s;
        cin>>s; 
        int j = s.length()-1;
        l = -1;
        k = -2;
        for(int i = 0;i < s.length();i++){
            if(a == 0 and s[i] == '1'){
                l = i;
                a = 1; 
            }
            if(b == 0  and s[(j-i)] == '1'){
                k = j-i;
                b = 1;
            }

        }

        // cout<<l<<" "<<k<<"\n";


        for(int i = l;i <= k;i++){
            if(s[i] == '0'){
                cnt++;
            }
        }

        cout<<cnt<<"\n";
    }
    return 0;
}