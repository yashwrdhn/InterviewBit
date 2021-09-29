#include <conio.h>
#include<bits/stdc++.h>

using namespace std;


int main(){
	
	vector<int> A;


	int n;
	cin>>n;
	for(int i=0 ; i<n;++i){
		int x;
		cin>>x;
		A.push_back(x);
	}


	int low = 0;
	int mid = 0;
	int high = n-1;
	

	
	
	while(mid <= high){

		if(A[mid] == 0){
			A[mid] = A[low];
			A[low] = 0;
			low++;
			mid++;
		}
		else if(A[mid] == 1){
			mid++;
		}
		else{
			A[mid] = A[high];
			A[high] = 2;
			
			high--;
		}
	}


	for(int i=0 ; i<n ; ++i){
		cout<<A[i]<<" ";
	}

	getch();
	return 0;
}