#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    long int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    if(n%2==0){
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
