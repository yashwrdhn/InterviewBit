#include <conio.h>
#include<bits/stdc++.h>

using namespace std;

void multiply(int arr[2][2],int B[2][2]){

	
	int x = arr[0][0]*B[0][0] + arr[1][0]*B[1][0] ;
	int y = arr[0][0]*B[0][1] + arr[1][0]*B[1][1] ;
	int w = arr[1][0]*B[0][0] + arr[1][1]*B[1][0] ;
	int z = arr[1][0]*B[0][1] + arr[1][1]*B[1][1] ;

	arr[0][0] = x;
	arr[0][1] = y;
	arr[1][0] = w;
	arr[1][1] = z;


	
}

void power(int A[2][2],int n){
	if(n == 0 || n == 1){
		return ;
	}

	int M[2][2] = {{1,1},{1,0}};

	power(A,n/2);
	multiply(A,A);

	if(n%2 != 0){
		multiply(A,M);
	}
}

int main(){
	
	int n;
	cin>>n;

	int A[2][2] = {{1,1},{1,0}};
	
	power(A,n-1);

	cout<<A[0][0];

	getch();
	return 0;
}