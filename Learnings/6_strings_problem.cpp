#include<bits/stdc++.h>
using namespace std;
int main(){

	// reverse of a string 
	/* string str,rev 
	   cin>>str;
	   for(int i =str.size() -1 ;i>=0;i--){
	      rev = rev_str + str[i];
	   }
	   cout<<rev<<endl;		
    This is a bad approach complexity is O(n) as opreator will continue from length of string 
    to 0 index   
	*/
	string str,rev_str;
	cin>>str;
	for(int i = str.size() - 1 ;i>=0;i--){  // str.size()-1 because index start from 0 
		rev_str.push_back(str[i]);
	}
	cout<<rev_str<<endl;
	// here complexity is O(1) for push_back() function

	// pallindrome (string = reverse_string) ex. 3553
	string st1,st2;
	cin>>st1;
	for(int i = st1.size() - 1;i>=0;i-- ){
		st2.push_back(st1[i]);
	}
	if(st1==st2){
		cout<<"Pallindrome"<<endl;
	}
	else{
		cout<<"Not Pallindrome"<<endl;
	}
	

	return 0;
}