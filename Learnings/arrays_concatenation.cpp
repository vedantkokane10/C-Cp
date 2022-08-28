#include<bits/stdc++.h>
using namespace std;
int main(){
    long int n;
    cin>>n;
    long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j =1;j<=2;j++){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
}