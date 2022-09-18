#include<bits/stdc++.h>
using namespace std;
/* 
deque -  stores elements just like array/vector and its size can changed.
it dynamically increases it's size
  Synatax
  deque <data_type> list_name;    // Decleration
  difference between list and a vector is that a list also works with front element (push_front)  
*/

int main(){
  deque <int> d1;            // {}
  d1.push_back(5);         // {5}
  d1.emplace_back(6);     //{5,6}
  for(auto it : d1){
    cout<<it<<" ";        // {5,6}
  }
  cout<<endl;
  // push_front() function
  d1.push_front(4);
   for(auto it : d1){
    cout<<it<<" ";      // {4,5,6}
  }
  cout<<endl;
  deque <int> d2 = {1,2,3};
  d2.emplace_front(9);
   for(auto it : d2){
    cout<<it<<" ";      // {0,1,2,3}
  }
  cout<<endl;
  cout<<d2.back()<<endl;   // 3 last
  cout<<d2.front()<<endl;  // 9 first
/*  Rest all funtions begin(),end(),rbegin(),rend(),clear(),
    insert(),size(),swap(). are same as vectors/lists
*/

  return 0;
}