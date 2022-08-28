#include <iostream>
using namespace std;

class Complex{
private :int r1,r2,i1,i2;
public:
void input(){

		cout<<"Enter real part of the complex number 1"<<endl;
		cin>>r1;
		cout<<"Enter imaginary part of complex number 1"<<endl;
		cin>>i1;
		cout<<"Enter real part of the complex number 2"<<endl;
		cin>>r2;
		cout<<"Enter imaginary part of complex number 2"<<endl;
		cin>>i2;
		if(i1>0 && i2>0){
		cout<<"Complex Number 1 : "<<r1<<" + "<<i1<<"i"<<endl;
		cout<<"Complex Number 2 : "<<r2<<" + "<<i2<<"i"<<endl;
		}
		else{
		cout<<"Complex Number 1 : "<<r1<<" "<<i1<<"i"<<endl;
		cout<<"Complex Number 2 : "<<r2<<" "<<i2<<"i"<<endl;
		}

}

void menu(){
	cout<<"=========== Menu ==========="<<endl;
	cout<<"Select 1 for Addition"<<endl;
	cout<<"Select 2 for Multiplication"<<endl;
	cout<<"Select 3 for Subtraction"<<endl;
	cout<<"Select 4 for Division"<<endl;
	cout<<"============================"<<endl;
}

void add(){
int real_add,img_add;
	real_add = r1+r2;
	img_add = i1+i2;
	cout<<"Addition of the 2 complex numbers is "<<endl;
	if (img_add>0){
	cout<<real_add<<" + "<<img_add<<"i"<<endl;
	}
	else{
		cout<<real_add<<" "<<img_add<<"i"<<endl;
	}
}

void sub() {
	int real_sub , img_sub;
		real_sub = r1-r2;
		img_sub = i1-i2;
		cout<<"Subtraction of the 2 complex numbers is "<<endl;
		if(img_sub>0){
		cout<<real_sub<<" + "<<img_sub<<"i"<<endl;
		}
		else{
			cout<<real_sub<<" "<<img_sub<<"i"<<endl;
		}
}

void mul(){
	int multi_real,multi_img;
		multi_real = (r1*r2) - (i1*i2);
		multi_img = (i1*r2) + (r1*i2);
		if(multi_img>0){
		cout<<multi_real<<" + "<<multi_img<<"i"<<endl;
			}
		else{
			cout<<multi_real<<" "<<multi_img<<"i"<<endl;
			}
}

void div(){
	int real_numerator ,real_denominator,img_numerator,img_denominator;
	real_numerator = (r1*r2) + (i1*i2);
	real_denominator = (r2*r2) + (i2*i2);
	img_numerator = (i1*r2) - (r1*i2);
	img_denominator = (r2*r2) + (i2*i2);
	if(img_numerator < 0 || img_denominator < 0){
		cout<<real_numerator<<"/"<<real_denominator<<"  "<<"("<<img_numerator<<"/"<<img_denominator<<")"<<"i"<<endl;
	}
	else
	{
		cout<<real_numerator<<"/"<<real_denominator<<" + "<<"("<<img_numerator<<"/"<<img_denominator<<")"<<"i"<<endl;
	}
}
};

int main() {
	char choice='y';
	int c;
	Complex x;
	while(choice=='y'){
		x.input();
		x.menu();
		cin>>c;
		if(c==1){
			x.add();
		}
		else if(c==2){
			x.mul();
		}#include <iostream>
using namespace std;

class Complex{
private :int r1,r2,i1,i2;
public:
void input(){

		cout<<"Enter real part of the complex number 1"<<endl;
		cin>>r1;
		cout<<"Enter imaginary part of complex number 1"<<endl;
		cin>>i1;
		cout<<"Enter real part of the complex number 2"<<endl;
		cin>>r2;
		cout<<"Enter imaginary part of complex number 2"<<endl;
		cin>>i2;
		if(i1>0 && i2>0){
		cout<<"Complex Number 1 : "<<r1<<" + "<<i1<<"i"<<endl;
		cout<<"Complex Number 2 : "<<r2<<" + "<<i2<<"i"<<endl;
		}
		else{
		cout<<"Complex Number 1 : "<<r1<<" "<<i1<<"i"<<endl;
		cout<<"Complex Number 2 : "<<r2<<" "<<i2<<"i"<<endl;
		}

}

void menu(){
	cout<<"=========== Menu ==========="<<endl;
	cout<<"Select 1 for Addition"<<endl;
	cout<<"Select 2 for Multiplication"<<endl;
	cout<<"Select 3 for Subtraction"<<endl;
	cout<<"Select 4 for Division"<<endl;
	cout<<"============================"<<endl;
}

void add(){
int real_add,img_add;
	real_add = r1+r2;
	img_add = i1+i2;
	cout<<"Addition of the 2 complex numbers is "<<endl;
	if (img_add>0){
	cout<<real_add<<" + "<<img_add<<"i"<<endl;
	}
	else{
		cout<<real_add<<" "<<img_add<<"i"<<endl;
	}
}

void sub() {
	int real_sub , img_sub;
		real_sub = r1-r2;
		img_sub = i1-i2;
		cout<<"Subtraction of the 2 complex numbers is "<<endl;
		if(img_sub>0){
		cout<<real_sub<<" + "<<img_sub<<"i"<<endl;
		}
		else{
			cout<<real_sub<<" "<<img_sub<<"i"<<endl;
		}
}

void mul(){
	int multi_real,multi_img;
		multi_real = (r1*r2) - (i1*i2);
		multi_img = (i1*r2) + (r1*i2);
		if(multi_img>0){
		cout<<multi_real<<" + "<<multi_img<<"i"<<endl;
			}
		else{
			cout<<multi_real<<" "<<multi_img<<"i"<<endl;
			}
}

void div(){
	int real_numerator ,real_denominator,img_numerator,img_denominator;
	real_numerator = (r1*r2) + (i1*i2);
	real_denominator = (r2*r2) + (i2*i2);
	img_numerator = (i1*r2) - (r1*i2);
	img_denominator = (r2*r2) + (i2*i2);
	if(img_numerator < 0 || img_denominator < 0){
		cout<<real_numerator<<"/"<<real_denominator<<"  "<<"("<<img_numerator<<"/"<<img_denominator<<")"<<"i"<<endl;
	}
	else
	{
		cout<<real_numerator<<"/"<<real_denominator<<" + "<<"("<<img_numerator<<"/"<<img_denominator<<")"<<"i"<<endl;
	}
}
};

int main() {
	char choice='y';
	int c;
	Complex x;
	while(choice=='y'){
		x.input();
		x.menu();
		cin>>c;
		if(c==1){
			x.add();
		}
		else if(c==2){
			x.mul();
		}
		else if(c==3){
			x.sub();
		}
		else if(c==4){
			x.div();
		}
		cout<<"Type 'y' to play again and 'n' to exit";
		cin>>choice;
		if(choice=='n'){
		cout<<"Program stopped"<<endl;
			break;
		}
		else if(choice!='y'){
			cout<<"You have chosen a wrong option"<<endl;
		}
	}
	return 0;
}


		else if(c==3){
			x.sub();
		}
		else if(c==4){
			x.div();
		}
		cout<<"Type 'y' to play again and 'n' to exit";
		cin>>choice;
		if(choice=='n'){
		cout<<"Program stopped"<<endl;
			break;
		}
		else if(choice!='y'){
			cout<<"You have chosen a wrong option"<<endl;
		}
	}
	return 0;
}

