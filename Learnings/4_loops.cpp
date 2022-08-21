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

	return 0 ;
}