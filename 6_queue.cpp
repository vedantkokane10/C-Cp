#include<bits/stdc++.h>
using namespace std;
/*
Queue - first in First Out (FIFO)
queue is like ticket counter first person comes gets ticket and then leaves
index accesing is also not allowed and traversing is also quiet difficult
push() ,pop() , size(),swap(),top(),empty() functions are used
*/

int main(){
	queue <int> q1;
	q1.push(5);
	q1.push(4);
	q1.push(1);
	// q1 = {5,4,1}
	cout<<q1.front()<<endl;   // 5 prints first element that was first inserted
	cout<<q1.back()<<endl;	  // 1 prints last element that was last inserted
	q1.pop();  		// deletes the first element that was first inserted
	cout<<q1.front()<<endl;  // {4,1}
	q1.back() = q1.back() + 1; // {4,1} --> {4,1+1} --> {4,2}
	cout<<q1.back()<<endl;
	// swap(),size(),empty() functions are same as stack
	return 0;
}