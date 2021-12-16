#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//recursive
// int min_cost(int n,int cost[],int k){

// 	if(k > n-1) return 0;

// 	int minCost = cost[k] + min(min_cost(n,cost,k+1), min_cost(n,cost,k+2));

// 	cout<<"at stair "<<k<<" cost "<<minCost<<endl;
// 	return minCost;
// }

//dp
int min_cost(int n,vector<int> &cost,vector<int> &dp,int k){

	if(k > n-1) return 0;

	if(dp[k] != 0) return dp[k];

	dp[k] = cost[k] + min(min_cost(n,cost,dp,k+1), min_cost(n,cost,dp,k+2));

	// cout<<"at stair "<<k<<" cost "<<minCost<<endl;
	return dp[k];
}

int main(){

	int n = 5;
	vector<int> cost = {10,1,1,2,1};
	vector<int> dp(n,0);
	cout<< min(min_cost(n,cost,dp,0), min_cost(n,cost,dp,1));



	return 0;
}