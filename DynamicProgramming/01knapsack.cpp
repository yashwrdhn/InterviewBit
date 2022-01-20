#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//recursive
int max_val(vector<int> &weights, vector<int> &values,int W,int n){

	if( n == 0 || W == 0) return 0;

	if( W < weights[n])
	int minCost = min( min_cost(n,cost,k+1), min_cost(n,cost,k+2));

	cout<<"at stair "<<k<<" cost "<<minCost<<endl;
	return minCost;
}

//dp
// int min_cost(int n,vector<int> &cost,vector<int> &dp,int k){

// 	if(k > n-1) return 0;

// 	if(dp[k] != 0) return dp[k];

// 	dp[k] = cost[k] + min(min_cost(n,cost,dp,k+1), min_cost(n,cost,dp,k+2));

// 	// cout<<"at stair "<<k<<" cost "<<minCost<<endl;
// 	return dp[k];
// }

int main(){

	int W = 7;
	vector<int> weights = {10,1,4,2,1};
	vector<int> values = {2,3,1,4,5};

	// vector<int> dp(n,0);
	cout<< max_val(weights,values,W,weights.size());


	return 0;
}