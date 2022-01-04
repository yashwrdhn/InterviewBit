#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int max_loot(vector<vector<int>> &nums,vector<int> &dp,int k){
	
	if(dp[k] != 0){
		return dp[k];
	}
    int x = max( nums[0][k], nums[1][k] );
	dp[k] = max(x + max_loot(nums,dp,k-2),max_loot(nums,dp,k-1));
	cout<<"for house k :"<<dp[k]<<endl;
	return dp[k];
}


int main(){

	vector<vector<int>> nums = {{2,2,2},{2,68,4}};
	int n = nums[0].size();
	vector<int> dp(n,0);

    dp[0] = max( nums[0][0],nums[1][0]);
    dp[1] = max(nums[0][1],nums[1][1]);
    dp[1] = max(dp[0], dp[1]);
	
	cout<<"max loot: "<<max_loot(nums,dp,n-1)<<endl;

	for(int i=0; i<n; ++i){
		cout<<i+1<<" : "<<dp[i]<<endl;
	}
	return 0;

}