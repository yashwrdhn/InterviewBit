#include <conio.h>
#include<bits/stdc++.h>

using namespace std;


int main(){
	


	vector<int> A = { 2,5,6,9,0,12,45,61};
	// 0 2 5 6 9 12 45 61
	int B = 6;

	sort(A.begin(),A.end());

	int i = 0;
	int j = 0;
	int n = A.size();
	while( i <= n && j <= n){

		if(A[j]-A[i] == B) { cout<<A[i]<<" "<<A[j]<<endl; i++;}

		if(A[j]-A[i] < B){
			j++;

		}	
		else { i++; }
	}

	cout<<"-1"<<endl;

	getch();
	return 0;
}