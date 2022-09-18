#include<bits/stdc++.h>
using namespace std;
/*
Stack - Last in First Out (LIFO)
index accesing is also not allowed and traversing is also quiet difficult
push() ,pop() , size(),swap(),top(),empty() functions are used
 */

int main(){
	stack <int> st1; 	// {}
	st1.push(5);  		// {5}
	st1.push(2);  		// {2}
	st1.push(3);  		// {3}
	st1.push(4);  		// {4}
	cout<<st1.top()<<endl;   // 4 prints the last element that was inserted
	cout<<st1.size()<<endl;  // 4 size
 	cout<<st1.empty()<<endl; // 0 (false)
 	st1.pop();  // deletes last inserted element
	// st1 = {3,2,5}
	// stack cannot be traversed if we want to traverse we use different data structure
 	// However we can traverse stack by iteration (but elements are deleted) and recursion (elements are not deleted)
	while(!st1.empty()) {
    cout << st1.top()<<" ";   // prints the last element that was last inserted
    st1.pop();      // deletes the last printed element 
    }


    // swaping of stacks
    stack <int> st2;
    st2.push(7);
    st2.push(4);
    stack <int> st3;
    st3.swap(st2);


	return 0;
}