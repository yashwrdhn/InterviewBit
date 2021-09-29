#include <conio.h>
#include<bits/stdc++.h>

using namespace std;


int main(){
	
	vector<int> A = { 2, 1, 5, 6, 2, 3 };

	vector<int> area;
	area.push_back(A[0]);

	int min1 = INT_MAX;
	int max1 = INT_MIN;

	for(int i=1; i<A.size(); ++i){

		int min1 = min(min1,A[i]);
		int wide_area = min1*(i+1);

		area.push_back(max(A[i],wide_area));

	}


	
	for(int i=0; i<area.size(); ++i){
		cout<<area[i]<<endl;
	}

	getch();
	return 0;
}