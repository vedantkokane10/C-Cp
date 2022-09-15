#include<bits/stdc++.h>
using namespace std;

// Recursive Approach
int binary_search(int a[],int beg,int end,int key){
	if(end>=beg){
		int mid = (beg+(end))/2;

	if(a[mid]==key){
		return mid;
	}
	else if(a[mid]>key){
		end = mid -1;
		binary_search(a,beg,end,key);
	}
	else if(a[mid]<key){
		beg = mid +1;
		binary_search(a,beg,end,key);
	}
	}
	return -1;
}	


int main(){
	int a[7] = {1,2,3,4,56,78,99};
	int beg,end,key;
	beg = 0;
	end = 7;
	//end = end-1;
	cout<<"Enter the number to be searched"<<endl;
	cin>>key;
	cout<<binary_search(a,0,7,key)<<endl;
	/*
	mid = (beg+mid)/2;
	while(beg<=end){
		if(a[mid]==key){
			break;
		}
		else if(a[mid] > key){
			end = mid - 1;
		}
		else if(a[mid]<key){
			beg = mid+1;
		}
		mid = (beg+end)/2;
	}
	cout<<"found at loc "<<mid+1<<endl; */
	return 0;
}

/* Recursive Approach
int binary_search(int a[],int beg,int end,int key){
	int mid = (beg+end)/2;
	if(a[mid]==key){
		return mid+1;
	}
	else if(a[mid]>key){
		binary_search(a,beg,mid-1,key);
	}
	else if(a[mid]<key){
		binary_search(a,mid+1,end,key);
	}
	
		return -1;
}
*/
/* Iterative approach
int beg,mid=0,end,key;
	beg = 0;
	end = a.size();
	mid = (beg+mid)/2;
	cout<<"Enter the number to be searched"<<endl;
	cin>>key;
	while(beg<=end){
		if(a[mid]==key){
			break;
		}
		else if(a[mid] > key){
			end = mid - 1;
		}
		else if(a[mid]<key){
			beg = mid+1;
		}
		mid = (beg+end)/2;
	}
	cout<<"found at loc "<<mid+1<<endl;

*/