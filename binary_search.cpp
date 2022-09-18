#include<bits/stdc++.h>
using namespace std;

int binary(int a[],int s,int e,int k){
	int m = (s+e)/2;
	if(a[m]==k){
		return m+1;
	}
	else if(a[m]<k){
		s = m+1;
		return binary(a,s,e,k);
	}
	else if(a[m]>k){
		e = m-1;
		return binary(a,s,e,k);
	}
	return -1;

}

int main(){
	int ar[] = {1,2,3,4,6,7,8,9}, n=9,s=0,e=n-1,key=7;
	cout<<binary(ar,s,e,key); // 6
	return 0;
}