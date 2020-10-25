/*
	The classic programming language of Bitland is Bit++. This language is so peculiar and complicated.

	The language is that peculiar as it has exactly one variable, called x. Also, there are two operations:

	Operation ++ increases the value of variable x by 1.
	Operation -- decreases the value of variable x by 1.
	A statement in language Bit++ is a sequence, consisting of exactly one operation and one variable x. The statement is written without spaces, that is, it can only contain characters "+", "-", "X". Executing a statement means applying the operation it contains.
	
	A programme in Bit++ is a sequence of statements, each of them needs to be executed. Executing a programme means executing all the statements it contains.
	
	You're given a programme in language Bit++. The initial value of x is 0. Execute the programme and find its final value (the value of the variable when this programme is executed)

*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll t,x = 0;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		if(s[1] == '+'){
			x++;
		}else{
			x--;
		}
	}
	cout<<x<<"\n";
}
