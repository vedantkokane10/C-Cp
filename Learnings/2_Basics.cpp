#include<bits/stdc++.h>
using namespace std;
int main()
{
	// Calculations are always done in higher data types
	// 7/2.0 = 3.5 as float > int
	cout<<7/2<<endl;     // here both int so result is int 
	cout<<7/2.0<<endl;
	int a = 3/2, b = 3/2.0;
	cout<<a<<endl;  // both int so result is int
	cout<<b<<endl; /* even if 2.0 (float) 
	result is int because 'b' is stored as  int */ 

	// '*/%' are from left to right
	cout<<7/2 * 3<<endl;
	cout<<3* 7/2<<endl; // no use of PEDMAS rule

	// 10^(-9) < int <10^9  (rough range of int)
	// 10^(-12) < int <10^12  (rough range of long int) 
	// 10^(-18) < int <10^18  (rough range of long long int)

	// Overflow
	/* if the input has asked a size between range
	1 <= input_1 <= 10^9
	1 <= input_2 <= 10^9
	then for example function --> input_1 * input_2
	result = 10^9 * 10^ 9 = 10^18
	But if we assign the input with int data type we'll get 
	different answer this is overflow.
	So we must assign variables,inputs wisely.
	We may use long int, long long int etc */
	int c,g,h;
	cin>>g>>h;
	// input -> 10000000 100000000
	cout<<g<<" * "<<h<<" = "<<g*h<<endl;
	// different answer (wrong)
	cout<<g<<" * "<<h<<" = "<<g * 1LL * h<<endl;
	// Right answer as we converted int to long long (LL *1) 

	double o,m;
	cin>>o>>m;
	// input -> 10000000 100000000
	cout<<o<<" * "<<m<<" = "<<o*c<<endl; /* it prints
	scientifc notation of result = -1.03998e+016 */
	cout<<o<<" * "<<m<<" = "<<fixed<<o*c<<endl;
	// in order to avoid scientific notation we use fixed before result
	cout<<o<<" * "<<m<<" = "<<fixed<<setprecision(0)<<o*c<<endl;
	// we use setpresicion to avoid zeros after decimal point
	/* We should avoid double/float because it has 
	precision error so we must use int/long int/long long */

	return 0;
}