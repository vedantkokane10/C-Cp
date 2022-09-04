// Array of Structure
#include<bits/stdc++.h>
using namespace std;

struct Person{
	string name;
	int age;
	int salary;
};

int main(){
	Person x[2];   // Assign object as an array
	cout<<"Enter Name, Age, Salary of employees"<<endl;
	for(int i=0;i<2;i++){
		cin>>x[i].name;
		cin>>x[i].age;
		cin>>x[i].salary;
	}
	for(int i=0;i<2;i++){
		cout<<"Employee "<<i+1<<endl;
		cout<<x[i].name<<endl;
		cout<<x[i].age<<endl;
		cout<<x[i].salary<<endl;
	}

	return 0;
}