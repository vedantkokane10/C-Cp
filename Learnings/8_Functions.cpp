#include<bits/stdc++.h>
using namespace std;
// Functions are used so that we can reuse the code

int sum_digits(int n){
	int sum=0;
	while(n){
		sum = sum + n % 10 ;
		n = n/10;
	}
	return sum;
}

int increment_func(int n){  // we are givimg our function a int datatype
	n++;
	return n;  // without return the function won't execute because it is not a void function
}

void func(int n){  // no need to return anything as we used void means nothing 
	n++;

}

void pass_by_value(int n){
	n = n + 5;
}

void pass_by_reference(int &n){
 	n = n + 5;
}

void swap_value(int a, int b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap_reference(int &a, int &b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main(){
	int i=0;
	cout<<"Before increment_function "<<i<<endl;
	cout<<"After increment_function "<<increment_func(i)<<endl;
	func(i);
	cout<<"After void functiom (func) "<<i<<endl;
	cout<<"Use of sum_digits Function "<<sum_digits(1234)<<endl;
	cout<<endl;

	// Pass/Call by value
	/* In pass/call by value we send a copy of the variable hence the orginal value of
	variable does not change. Every time by default it is pass by value only (if & not present) */
	int n = 4;
	pass_by_value(n);
	cout<<"Pass by value -> n = "<<n<<endl; // must print 4
	cout<<endl;

	// Pass/Call by refrence 
	/* In pass/call by refrence we send the actual refrence of the variable hence the orginal value of
	variable does change. Every time by default arrays are passed by refrence even (if & not present) 
	if a function has parameters which contain & before variable then it is pass by refrence so original
	value is going to change */
	// int n = 4;
	pass_by_reference(n);
	cout<<"Pass by reference -> n = "<<n<<endl; // must print 9
	cout<<endl;


	/* Swap function using pass by value and reference */
	int a = 2, b = 5;
	cout<<"Before any Function a = "<<a<<", b = "<<b<<endl;
	swap_value(a,b);
	cout<<"Swapping by pass by value -> a = "<<a<<", b = "<<b<<endl;  // Unchanged
	swap_reference(a,b);
	cout<<"Swapping by pass by reference -> a = "<<a<<", b = "<<b<<endl;  // Swapped

	return 0;
	/* return is used to succesfully terminate the function 
	so if it is used before some operational lines then those line won't
	be executed */
}