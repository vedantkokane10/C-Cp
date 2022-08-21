// 1. C++ Basics 
// cout --> Printing statement
// cin --> Input
// /n or endl --> New line
#include<bits/stdc++.h>
using namespace std;
int main()
{
	/* Data Types - char 'a','b' it will only take 1 character,
	int(1,2) , float (1.2,6.3), 
	double (long float) (1.2484,28.282) , bool (True OR False)
	long int  can store larger value then int,  
	long long int - can store larger value than long int */
	cout<<"Data Types"<<endl;
    char c = 'a';
    cout<<"char "<<c<<endl;
    int i = 4 , n = 2.5 ; // int only print integer no float 
    cout<<"int "<<i<<"  "<<n <<endl;
    double d = 3.323;
    cout<<"double "<<d<<endl;
    bool b = 1,l= true; // 0 is false and any number is true
    cout<<"bool "<<b<<"  "<<l<<endl;

    cout<<endl;
    /* Operators 
    + = add
    - = subtract
    * = multiply
    / = divide
    % = modulo (For getting remainder of a division) */
    int q = 20 , w = 6;
    cout<<"Operators q = 20, w = 6"<<endl;
    cout<<"+ "<<q+w<<endl;
    cout<<"- "<<q-w<<endl;
    cout<<"* "<<q*w<<endl;
    cout<<"/ "<<q/w<<endl;
    cout<<"% "<<q%w<<endl;

    cout<<endl;
    cout<<"Increment and Decrement"<<endl;
    /* Increment (a=a+1) - a++ (post) , ++a  (pre) 
       Decrement (a=a-1) - a-- (post) , --a  (pre) */
    int e = 4;
    cout<<"e++ "<<e++<<endl;
    cout<<"e = "<<e<<endl;
    cout<<"++e "<<++e<<endl;
    cout<<"e = "<<e<<endl;
    cout<<"e-- "<<e--<<endl;
    cout<<"e = "<<e<<endl;
    cout<<"--e "<<--e<<endl;
    cout<<"e = "<<e<<endl;

    cout<<endl;
    cout<<"Type Casting"<<endl;
    /* Type casting 
    char to int (ASCII value) 
    we can also perform various mathematical operations on
    ASCII values*/
   	char t = 'a' , p = 'M',o = '9' ;
   	cout<<"ASCII value of a is " <<int(t)<<endl;
   	cout<<"ASCII value of M is " <<int(p)<<endl;
  	cout<<"ASCII difference of (a-M) is "<<int(t-p)<<endl;
  	cout<<"ASCII value of 9 is "<<int(o)<<endl;
  	cout<<endl;

  	cout<<endl;
  	cout<<"Input"<<endl;
  	/* cin -  it takes input of any data type.
  	cin can take multiple inputs on same line
  	cin ignores any useless spaces or empty lines between no
  	of inputs */  
  	int z,x;
  	cin>>z>>x;
  	cout<<z<<endl;
  	cout<<x<<endl;



	return 0;
}


