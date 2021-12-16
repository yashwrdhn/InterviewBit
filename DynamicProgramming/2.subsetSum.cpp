#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int bottom_up(int arr[],int n,int sum)
{
	bool dp[n+1][sum+1];

	dp[0][0] = 1;
	for(int j=1; j<sum+1; ++j) dp[0][j] = 0;
	for(int i=1; i<n+1; ++i) dp[i][0] = 1;
	
	for(int i=1; i<n+1; ++i){
		for(int j=1; j<sum+1; ++j){

			if(arr[i-1] > j){
				dp[i][j] = dp[i-1][j];
			}
			else{
				dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
			}
		}
	}
	return dp[n][sum];
}

int main(){

	int arr[] = {2,3,4,7,10};
	int sum = 19;
	int n = 5;
	cout<< bottom_up(arr,n,sum);
	return 0;
}