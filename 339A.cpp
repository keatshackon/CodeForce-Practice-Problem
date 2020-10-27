#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	string s;
	cin>>s;
	if(s.size() < 2){
		cout<<s[0]<<"\n";
	}else{
		for(int i=0;i<s.size()-2;i+=2) {
			for(int j=i+2;j<s.size();j+=2) {
				if(s[i]-'a' > s[j]-'a') { 
					char temp = s[i];
					s[i] = s[j];
					s[j] = temp;
				}
			}
		}
		cout<<s;	
	}
	
}