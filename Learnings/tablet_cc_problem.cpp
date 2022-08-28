#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long int t,b,n;
	cin>>t;
	cout<<max(5,6)<<endl;
	while(t--){
	    cin>>n>>b;
	    long int w[n],h[n],maxi,p[n],res,res2;
	    maxi = 0;
	        for(int i=0;i<n;i++){
	            cin>>w[i]>>h[i]>>p[i];
	             if(b>=p[i]){
	             	 maxi = max(maxi,w[i]*h[i]);
	             }
	         }
	             if(maxi==0){
	                 cout<<"no tablet"<<endl;
	             }
	             else{
	             	cout<<maxi<<endl;
	             }	             
	        
	    
	    
	}
	return 0;
}
