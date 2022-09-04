#include<bits/stdc++.h>
using namespace std;

const int n = 1e9;   // global variable with size more than 1e5
int array[n];

int main(){
	/* int a[5];
	for(int i=0;i<5;i++){
		cin>>a[i];    // a[0],a[1]...a[n-1] (rows arrangement)
	}
	for(int i=0;i<5;i++){
		cout<<a[i];
		cout<<endl;
	}
	int n;
	cin>>n;
	int ar[n]; // for declaring an array of size taken from user
	*/
	/* int arr_2d[4][4];  // 4-rows , 4-columns (square all sides equal)
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
		cin>>arr_2d[i][j];
		}
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
		cout<<arr_2d[i][j]<<" ";
		}
		cout<<endl;
	}
	Input for 2d array
	1 2 3 4 
	5 6 7 8
	9 10 11 12
	13 14 15 16  */
	int arr_3d[2][2][2];  // 3d array (cube all sides equal)	
	// [first] - how many arrays,[second] - rows, [third] - columns
	for(int i=0;i<2;i++){      // i - no of 2d arrays
		for(int j=0;j<2;j++){    // j- rows
			for(int k=0;k<2;k++){  // columns
				cin>>arr_3d[i][j][k];
	}
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			for(int k=0;k<2;k++){
				cout<<arr_3d[i][j][k]<<"  ";
			}
		cout<<endl;
		}
	}
	cout<<arr_3d[0][0][0]<<endl;  // must print 1
	cout<<arr_3d[0][1][1]<<endl;  // must print 4 
	/* 3d array input 
	1 2 
	3 4  // end of first array
	5 6 
	7 8 // end of second array */

	/* local arrays (defined inside main function) have
	size of 1e5 (else we get segmentation fault)
	but, global arrays (defined outside main funtion)
	have very large size (more than 1e5) */



	return 0;
}