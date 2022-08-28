#include<bits/stdc++.h>
using namespace std;
int main()
{
	/* while loop 
	Syntax :
	 while(condition) {
       ...
       }  */
	cout<<"Use of while loop"<<endl;
	int i = 1;
	while(i<=10){
		cout<<i<<endl;
		i++;
	}

	/* for loop
	for(inialisation;condition;operation){
	..
	} */
	
	cout<<endl;
	cout<<"Use of for loop"<<endl;
	for(int j=1;j<=10;cout<<j++<<endl){}
    /* It can be also writtern
    for(int j=1;j<=10;j++){cout<<j<<endl;}
    for(int j=1;j<=10;++j){cout<<j<<endl;} */ 
		cout<<endl;


	cout<<"Pattern Printing"<<endl;
	for(int i=1;i<=5;i++) // this loop is for rows
	{
		for(int j=1;j<=i;j++) // this loop is for columns
		{
			cout<<"*";
		}
		cout<<endl;  // means end of the row and new row on next line
	}
	cout<<endl;
	cout<<"Reverse Pattern Printing"<<endl;
	for(int i=1;i<=5;i++)       // this loop is for rows
	{
		for(int j=5;j>=i;j--)  // this loop is for columns
		{
			cout<<"*";  // means end of the row and new row on next line
		}
		cout<<endl;
	}
	cout<<endl;

	/* for test cases we use while loop until it becomes false */
	cout<<"Test Cases"<<endl;
	int t;
	cin>>t;
	while(t--) {      // test cases will taken as input until t=0 (false) 
		// this loop will run for operation test cases until the while condition is false 
		cout<<t<<endl;
	} 
	cout<<endl;


	/*    
	infinte loops 
	while(condition true){} if condtion is not false while loop won't stop
	ex. while(1){}

	for loop infinite
	if for(i=1;;i++){} condition not given then for loop won't end
	*/ 

	cout<<"Jump statements"<<endl;
	/* Jump statements 
	break - exits if the condition is true
	continue - skips the given condition
	*/
	for(int i=1;i<=5;i++){ 
		if(i==3){
			break;
		} cout<<i<<endl;
	} /* if multiple for loops are there and if break is used then it will go to the last for loop */
	cout<<endl;
	for(int i =1;i<=5;i++){
		if(i==3){
			continue;
		}cout<<i<<endl;
	}	

	// Life universe and everything problem
	cout<<endl;
	while(true){
		int num;
		cin>>num;
		if(num==42){
			break;
		}
		cout<<num<<endl;
	}
	cout<<endl;

	// sum digits problem
	int n = 1234567,sum=0,last;
	cout<<n % 10<<endl; // will print last digit means tens (% 10)
	cout<<n % 100<<endl; //  will print last 2 digits means hundred (% 100)
	while(n != 0){
		last = n%10;
		sum = sum + last;
		n = n/10; // divide the number by 10 so that last digit is gone(int division returns int) 1234567/10 = 123456 
	}
	cout<<sum<<endl;
	return 0 ;
}