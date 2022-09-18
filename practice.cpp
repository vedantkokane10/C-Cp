#include<bits/stdc++.h>
using namespace std;

int main(){
	int reverse = 0,digit;
	long long n;
	for(int i=100;i<1000;i++){
		for(int j=100;j<1000;j++){
			n = i*j;
			while(n!=0){
				digit = n%10;
				reverse = reverse *10 + digit;
				n/10;
			}
			cout<<reverse<<endl;
			/* if(reverse==n){
				cout<<reverse<<endl;
			}*/
		}
	}
	return 0;
}