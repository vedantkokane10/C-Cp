#include<bits/stdc++.h>
using namespace std;
/*
priority_queue - return max element that was inserted in queue (maximum heap)
It is not a linear data structure it has abstract properties (heap data structure)
*/

int main(){
	priority_queue <int> p1;
	p1.push(5);
	p1.push(2);
	p1.push(3);
	p1.push(7);
	p1.push(1);
	// p1 = {5,2,3,7,1} --> on top is 7 because it is maximum
	cout<<p1.top()<<endl;  // 7 (greatest)
	p1.pop(); // pop the greatest element (7)
	cout<<p1.top()<<endl;  // 5 (greatest)

	// size(),swap(),empty() functions are same as others

	// for Minimum heap (minimum element) we can implement
	priority_queue <int, vector<int> , greater<int>> p2;
	p2.push(5);
	p2.push(1);
	p2.push(2);
	p2.push(7);
	// p2 = {5,1,2,7} --> on top is 1 because it is minimum
	cout<<p2.top()<<endl;  // 1 (lowest)
	p2.pop(); // pop the lowest element (1)
	cout<<p2.top()<<endl;  // 2 (lowest)
	
	return 0 ;
}
