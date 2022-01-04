#include <iostream>
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

int max_loot(vector<int> &nums,vector<int> &dp,int l,int k){
	
	if(k < l )return 0;

	if(dp[k] != 0){
		return dp[k];
	}

	dp[k] = max(nums[k] + max_loot(nums,dp,l,k-2),max_loot(nums,dp,l,k-1));
	// cout<<"for house k :"<<loot<<endl;
	return dp[k];
}


int main(){

	int n = 3;
	vector<int> dp(n,0);
	vector<int> nums = {1,2,3};

	// if(n == 1) return nums[0];
 //    if(n == 2) return max(nums[0],nums[1]);

    dp[0] = nums[0];
    // dp[1] = nums[1];
    dp[1] = max(nums[1],nums[0]);
    cout<<"max loot: "<<max_loot(nums,dp,0,n-2)<<endl;
    
    
   for(int i=0; i<n; ++i){ dp[i] = 0;}
   dp[1] = nums[1];
	cout<<"max loot: "<<max_loot(nums,dp,1,n-1)<<endl;
	
	

	for(int i=0; i<n; ++i){
		cout<<i+1<<" : "<<dp[i]<<endl;
	}

	getch();
	return 0;

}