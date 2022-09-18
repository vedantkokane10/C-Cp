#include<bits/stdc++.h>
using namespace std;
// pair is in utility library 
int main(){
	cout<<"this is a pair "<<endl;
	pair <int,int> p ={1,3}; // this is a pair
	// p.first will give 1 and p.second will give 3
	cout<<p.first<<" "<<p.second<<endl;
	cout<<endl;

	// Nested Pairs
	cout<<"this is a nested pair "<<endl;
	pair<int, pair<int,int>> p1 = {5,{6,4}};
	cout<<p1.second.first<<endl;   // 6
	cout<<p1.second.second<<endl;  // 4
	cout<<endl;
	
	// Pair array
	cout<<"this is a pair array "<<endl;
	pair <int,int> arr[] =  {{7,8},{9,5},{6,8}} ;
	cout<<arr[1].first<<endl;  // 9
	cout<<arr[0].second<<endl; // 8
	cout<<arr[2].first<<endl;  // 6 

	return 0;
}