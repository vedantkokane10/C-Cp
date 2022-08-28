#include<bits/stdc++.h>
using namespace std;
int main(){
	string str,str2="hello";
	cin>>str;
	cout<<str<<endl;
	// to know the length of string we can use string_name.size()
	cout<<str.size()<<endl;
	// we can also access the character of string
	cout<<str[0]<<endl;
	// we can also change a character of a string
	str[0] = 'a';    /* here we are assigning a character to the 
	existing one so ''(single qoutes) must be used not "" (double) which is used for string */ 
	cout<<str<<endl;
	// iterating over a string
	for(int i=0;i<str.size();i++){
		cout<<str[i]<<endl;
	}
	// checking for equality of strings
	string st1 = "Hey" , st2 = "hey"; // hey and Hey are not same
	if(st1==st2){
		cout<<"Equal strings"<<endl;
	}
	else{
		cout<<"Not equal strings"<<endl;
	}
	cout<<st1<<" "<<st2<<endl; // Concatenation of 2 strings
	cout<<endl;

	// Line input
	string line;
	getline(cin,line);
	cout<<line<<endl;
	// Current Input - hello Hey this is a line
	/* In getline the input does not check for any /n of spaces it starts right after the 
	previous input (buffering) for exapmle in above input the cursor takes (cin) hello and
	then without any spaces or new line it shifts to next */
	// Lets run a test case for printing 3 strings
	int t ;
	cin>>t;
	string lines;
	while(t--){
		getline(cin,lines);
		cout<<lines<<endl;
	}   
	/* Current Output - 	
							line 1
							line 2  */
	/* Current Input -  hello Hey this is a line
						3
						line 1
						line 2
						line 3 */
	// Hence to avoid such case and to used getline just like cin (cursor and buffering stuff like cin)
	// we use cin.ignore();
	int t1 ;
	cin>>t1;
	string lines1;
	cin.ignore();
	while(t1--){
		getline(cin,lines1);
		cout<<lines1<<endl;
	}
	/* Current Input - hello Hey this is a line
						3
						line 1
						line 2
						line 3
						3
						new line 1
						new line 2
						new line 3 */




	return 0;
}