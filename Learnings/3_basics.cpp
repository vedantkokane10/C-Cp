#include<bits/stdc++.h>
using namespace std;

int glob;  /*  this a Global variable it can used anywhere and 
also can be modified */

int main()
{
	int a = 2,b = 3,c = 2;
	/* Relational Operators : == equal , != not equal,
	<= , >= */ 
	cout<<(a==b)<<endl; // False so 0 is output
	cout<<(a!=b)<<endl; // True so 1 is output
	// && - to check 2 statements True or not (AND)
	// || - to check any one statement True (OR)
	cout<<((a==b) && (a>=c))<<endl; /* False as first case is False
	Both cases true required in and(&&) */
	cout<<(a==b || a<=c)<<endl; /* True as second is True
	Only one case true required in or(||) */
	cout<<endl;
	cout<<"Conditionals if/else if/else"<<endl;
	int n; // input 
	cin>>n;
	if(n==0){
		cout<<"Zero"<<endl;
	}
	else if(n%2==0){
		cout<<"Even"<<endl;
	}
	else{
		cout<<"Odd"<<endl;
	}

	cout<<endl;
	cout<<"Scope of variable and global variable"<<endl;
	glob = 6;
	{
		int b = 4;
		/* Here we have made a scope in curly braces {}
		we cannot use b variable our of curly braces {}
		or we will get an error */
		cout<<"Scope in {} --> "<<b<<endl;  
		// scope of b only in {} braces 
	}

	cout<<"Global variable --> "<<glob<<endl;


	return 0 ;
}