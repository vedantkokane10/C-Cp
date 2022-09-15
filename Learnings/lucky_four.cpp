 #include <bits/stdc++.h>
using namespace std;
/*
int main() {
	// your code goes here
	long  long t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int c = 0;
	    while(n){
	        int digit = n%10;
	        if(digit ==4){
	            c = c + 1;
	        }
	        n = n/10;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
*/
int main(){

	// your code goes here
	long int t,k,n;
	vector <int> a;
	vector <int> b;
	vector <int> c;
	cin>>t;
	while(t--){
	    cin>>n;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    cin>>k;
	    for(int j=0;j<k;j++){
	        cin>>b[j];
	    }
	    for(int u=0;u<n;u++){
	            if(a[u]!=b[u]){
	                c.push_back(a[u]);
	            
	        }
	    }
    long int q =c.size();
    for(int r=0;r<q;r++){
        cout<<c[r]<<" ";
    }
	}
	return 0;
}