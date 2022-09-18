#include<bits/stdc++.h>
using namespace std;
/* 
Vector -  stores elements just like array and its size can changed.
it dynamically increases it's size
  Synatax
  vector <data_type> vector_name;    // Decleration
*/

int main(){

	vector <int> v;
	v.push_back(4);   // push_back - used to insert an element in vector
	v.emplace_back(5); // same like push_back but faster than it
	
	// Printing a vector it's just like an array
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;

	// Vector of pairs
	vector <pair<int,int>> p;
	p.push_back({1,2});  // in push_back {} is used for pairs
	p.emplace_back(3,4); // in emplace_back {} is not used for pairs
	// printing vector of pairs
	for(int i=0;i<p.size();i++){
		cout<<p[i].first<<" "<<p[i].second<<" ";
	}
	cout<<endl;

	// vector decleration
	vector <int> o(5);     // 5 is size which can be increased if want to,  {'','','','',''}  it might have 0 or any garbage value
	//  printing vector yo
	for(int i=0;i<o.size();i++){
		cout<<o[i]<<" ";
	}
	cout<<endl;

	vector <int> y(5,40); // {40,40,40,40,40} 5 is size and 40 is the element
	//  printing vector y
	for(int i=0;i<y.size();i++){
		cout<<y[i]<<" ";
	}
	// size() function is used for printing the size pf vector
	/* Ex. y.size() --> 5 */
	cout<<endl<<"Size of vector y is  "<<y.size()<<endl;
	cout<<endl;

	// Copying an vector into a new vector
	vector <int> r(5,6); // {6,6,6,6,6}
	for(int i=0;i<r.size();i++){
		cout<<r[i]<<" ";
	}
	cout<<endl;
	vector <int> q(r);           // copy of vector r
	for(int i=0;i<q.size();i++){
		cout<<q[i]<<" ";
	}
	cout<<endl;

	//for accesing we can use v[index] or v.a(index)
	cout<<v[1]<<endl;       // 5
	cout<<v.at(0)<<endl;	// 4
	cout<<v.back()<<" ";	// 5  prints last element
	cout<<endl;

	// iterators
	vector <int> :: iterator it = v.begin(); // it will store address of v.begin() not data
	cout<<*it<<endl;  // 4
	it++;
	cout<<*it<<endl;  // 5
	/* Suppose iterator :: it =
	v = {10,20,30,40}
	v.rend() - reverse end  --> 10
	v.rbegin() - reverse begin --> 40
	v.end() - end --> at the meomary of (40+1) not at 40 
	v.back) -  at the last element --> 40    */
	vector <int> arr = {10,20,30,40,50};
	for(auto it=arr.begin();it!=arr.end();it++){  // auto here is used to for initialising of iterator (vector <int> :: iterator it = arr.begin)
		cout<<*it<<" "; 	// iterate over meomary so we use *it to iterate  over the data 
	}
	cout<<endl;
	for(auto it : arr){  // auto here means iterate over the data type not(address)
		cout<<it<<" ";
	}
	cout<<endl;

	// Erase function
	arr.erase(arr.begin()+1);   // erase takes address --> 0+1 = 1
	for(auto it : arr){   // arr =  {10,30,40,50}
		cout<<it<<" "; 
	}
	cout<<endl;

	// in order to delete 30 and 40 we must use arr.erase[start,end) (end is not included means 1 location ahead of the index that must be deleted)
	//arr.erase(arr.begin()+1,arr.begin()+3);
	for(auto it : arr){   // arr =  {10,50}
		cout<<it<<" "; 
	}
	cout<<endl;

	// Insert function 
	// it use for inserting elements
	// vector_name.insert(index (function),element) 
	vector <int> i = {1,2,3,4,5};
	i.insert(i.end(),6);
	for(auto it : i){
		cout<<it<<" ";
	}
	cout<<endl;
	i.insert(i.begin(),9);
	for(auto it : i){
		cout<<it<<" ";
	}
	cout<<endl;
	// copying a vector and it as a sub-vector
	vector <int> copy(3,10); // {10,10,10}
	i.insert(i.begin(),copy.begin(),copy.end());
	i.insert(i.begin(),9);
	for(auto it : i){
		cout<<it<<" ";  // {9 10 10 10 9 1 2 3 4 5 6}
	}
	cout<<endl;

	// pop_function - used for poping out last funtion
	i.pop_back(); // {9 10 10 10 9 1 2 3 4 5}
	for(auto it : i){
		cout<<it<<" ";  
	}
	cout<<endl;

	// swap vectors function
	vector <int> v1 = {1,2,3};
	vector <int> v2 = {4,5,6};
	cout<<"v1 = ";
	for(auto it : v1){
		cout<<it<<" ";  
	}
	cout<<endl<<"v2 = ";
	for(auto it : v2){
		cout<<it<<" ";  
	}
	cout<<endl<<"After swap() function"<<endl;
	v1.swap(v2); // v1 = {4,5,6} , v2 = {1,2,3}
	cout<<"v1 = ";
	for(auto it : v1){
		cout<<it<<" ";  
	}
	cout<<endl<<"v2 = ";
	for(auto it : v2){
		cout<<it<<" ";  
	}
	cout<<endl;

	// clear function - it clears (erases) entire vector
	v1.clear();
	for(auto it : v1){
		cout<<it<<" ";  // empty line
	}

	v1.epmty(); // tells whether vector empty or not (true/false)
	return 0;
}