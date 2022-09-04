#include<bits/stdc++.h>
using namespace std;

// Structure is defiend with struct outside the main function
struct Person{
	string name;
	int age;
	int salary;
};
// Structure is an user defined data type


int main(){
	Person x;  // object x is used to use the structure Person
	cout<<"Enter Name, Age, Salary"<<endl;
	getline(cin,x.name);          // we take input name using name attribute of Person
	cin>>x.age;                   // we take input age using age attribute of Person
	cin>>x.salary;                // we take input salary using salary attribute of Person
	cout<<"Name - "<<x.name<<endl;
	cout<<"Age - "<<x.age<<endl;
	cout<<"Salary - "<<x.salary<<endl;
	return 0;
}