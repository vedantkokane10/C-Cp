#include<bits/stdc++.h>
using namespace std;
/* 
List -  stores elements just like array/vector and its size can changed.
it dynamically increases it's size
  Synatax
  list <data_type> list_name;    // Decleration
  difference between list and a vector is that a list also works with front element (push_front)  
*/

int main(){
  list <int> l1;            // {}
  l1.push_back(5);         // {5}
  l1.emplace_back(6);     //{5,6}
  for(auto it : l1){
    cout<<it<<" ";        // {5,6}
  }
  cout<<endl;
  // push_front() function
  l1.push_front(4);
   for(auto it : l1){
    cout<<it<<" ";      // {4,5,6}
  }
  cout<<endl;
  list <int> l2 = {1,2,3};
  l2.emplace_front(0);
   for(auto it : l2){
    cout<<it<<" ";      // {0,1,2,3}
  }

/*  Rest all funtions begin(),end(),rbegin(),rend(),clear(),
    insert(),size(),swap(). are same as vectors
*/

  return 0;
}