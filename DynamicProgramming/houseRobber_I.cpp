#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int max_loot(vector<int> &nums,vector<int> &dp,int k){
	
	

	if(dp[k] != 0){
		return dp[k];
	}

	dp[k] = max(nums[k] + max_loot(nums,dp,k-2),max_loot(nums,dp,k-1));
	// cout<<"for house k :"<<loot<<endl;
	return dp[k];
}


int main(){

	int n = 10;
	vector<int> dp(n,0);
	vector<int> nums = {9,0,3,5,2,7,3,3,8,7};

	// if(n == 1) return nums[0];
 //    if(n == 2) return max(nums[0],nums[1]);

    dp[0] = nums[0];
    dp[1] = max(nums[1],nums[0]);
    
	cout<<"max loot: "<<max_loot(nums,dp,9)<<endl;

	for(int i=0; i<n; ++i){
		cout<<i+1<<" : "<<dp[i]<<endl;
	}
	return 0;

}