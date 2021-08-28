#include <conio.h>
#include<bits/stdc++.h>

using namespace std;


int main(){
	
	vector<int> A = { -3,-2,-1,0,1,3,5};

	int max1 = INT_MIN;
	int max2 = INT_MIN;
	int min1 = INT_MAX;
	int min2 = INT_MAX;

	for(int i = 0; i < A.size(); ++i){
		
		if(A[i]+i > max1){
			max1 = A[i] + i;
		}
		
		if(A[i]+i < min1){
			min1 = A[i] + i;
		}

		if(A[i]-i > max2){
			max2 = A[i] - i;
		}
		
		if(A[i]-i < min2){
			min2 = A[i]-i ;
		}


	}
	cout<<max1<<endl;
	cout<<max2<<endl;
	cout<<min1<<endl;
	cout<<min2<<endl;
	cout<< max(abs(max1-min1),abs(max2-min2));

	getch();
	return 0;
}