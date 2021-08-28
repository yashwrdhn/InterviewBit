#include <conio.h>
#include<bits/stdc++.h>

using namespace std;


int main(){
	
	vector<int> A = { 3,2,1,5,8,9};


	for(int i=1; i <A.size()-1;++i){
		
		sort(A.begin(),A.begin()+i);
		sort(A.begin()+i+1,A.end());

		if(A[i] > A[i-1] && A[i] < A[i+1])
			cout<<1;
	}

	

	getch();
	return 0;
}