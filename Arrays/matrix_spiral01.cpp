#include <bits/stdc++.h>
#include <conio.h>

using namespace std; 

int main(){

	vector<vector<int>> v1;
	
	int no = 2;
	int A = 2*no - 1;
	int n = A;
	int count = 0;
	
	for(int i=0; i<n ;++i){
		vector<int> v2;
		for(int j=0; j<n; ++j){
			v2.push_back(0);
		}	
		v1.push_back(v2);		
	}

	// for(int i=0; i<n ;++i){
	// 	for(int j=0; j<n; ++j){
	// 		cout<<v1[i][j]<<" ";
	// 	}
	// 	cout<<"\n";
	// }


	while(A >= n/2 ){
		
		for(int j=n-A; j<A;++j){
			v1[n-A][j] = no;
			// count++;
			// cout<<v1[n-A][j];
		}

		// cout<<"\n"; 

		for(int i=n-A+1; i<A;++i){
			v1[i][A-1] = no;
			// cout<<v1[i][A-1];

		}

		// cout<<"\n"; 

		for(int j=A-2; j>=n-A;--j){
			v1[A-1][j] = no;
			// cout<<v1[A-1][j];
		}

		cout<<"\n";

		for(int i=A-2; i>n-A;--i){
			v1[i][n-A] = no;
			cout<<v1[i][A-1];
		}

		cout<<"\n";
		--A;
		--no;
	}

	for(int i=0; i<n ;++i){
		for(int j=0; j<n; ++j){
			cout<<v1[i][j]<<" ";
		}
		cout<<"\n";
	}


	getch();
	return 0;
}