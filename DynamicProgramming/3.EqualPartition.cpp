#include <conio.h>
#include<bits/stdc++.h>
using namespace std;


bool if_subset(vector<int> &nums,int w, int n){

	bool dp[n+1][w+1];
	
	dp[0][0] = 1;
	for(int j=1; j<w+1; ++j) dp[0][j] = 0;
	for(int i=1; i<n+1; ++i) dp[i][0] = 1;

	for(int i=1; i<n+1; ++i){
		for(int j=1; j<w+1; ++j){

			if(nums[i-1] > j){
				dp[i][j] = dp[i-1][j];
			}
			else{
				dp[i][j] = dp[i-1][j-nums[i-1]] || dp[i-1][j];
			}
		}
	}
	return dp[n][w];

}

int main(){
	
	vector<int> nums = {1,6,11,6,5,8,3};

	int sum = 0;
	int n = nums.size();

	for(int i=0; i<n; ++i){
		sum += nums[i];
	}

	if(sum%2){
		cout<<"Equal partition not possible."<<endl;
	}

	cout<< if_subset(nums,sum/2,n)<<endl;


	getch();
	return 0;
}