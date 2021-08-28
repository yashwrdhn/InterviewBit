#include <conio.h>
#include<bits/stdc++.h>

using namespace std;


int F(int x,int y){

	int z  = x^y ;
	int count=0;

	//to find no of set bits
	while(z){
		z = z&(z-1);
		count++;
	}
	return count;
}	


int main(){
	
	int arr[] = { 1,3,5};
	int n = 3;
	int distinct = 0;
	vector<vector<int>> arr2;

	for(int i=0 ; i< n ;++i){
		arr2.push_back({});
		for(int j=0; j<n;++j){
			arr2[i].push_back(0);
		}
		
	}

	int sum = 0;
	int final_ans = 0;

	for(int i=0; i<n ; ++i){
		for(int j=0; j<n ; ++j){

			if(i ==j ){
				arr2[i][i] = 0;
				continue;
			}
			if(arr2[i][j] > 0){
				sum += arr2[i][j];
				continue;
			}

			int distinct = F(arr[i],arr[j]);;
			arr2[i][j] = arr2[j][i] = distinct;
			sum +=  distinct;

		}

		final_ans += sum;
		sum = 0;
	}

	
	cout<<final_ans;

	getch();
	return 0;
}

//https://www.interviewbit.com/problems/different-bits-sum-pairwise/