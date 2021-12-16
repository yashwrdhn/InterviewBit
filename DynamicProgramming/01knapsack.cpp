#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//recursive
// int max_val(vector<int> &weights, vector<int> &values,int W,int n){

// 	if( n == 0 || W == 0) return 0;
// 	int maxVal = 0;
// 	if(W < weights[n-1]){
// 		return max_val(weights,values,W,n-1);
// 	}

// 	else{
// 	maxVal = max( values[n-1] + max_val(weights,values,W-weights[n-1],n-1), max_val(weights,values,W,n-1));
// 	cout<<"n "<<n<<" val "<<maxVal<<endl;
// 	return maxVal;
// 	}

// }

//memoized
int max_val(vector<int> &weights, vector<int> &values,int W,int i,int **dp){

	if( i < 0) return 0;

    if(dp[i][W] != -1) return dp[i][W];

    if(W < weights[i]){
		dp[i][W] = max_val(weights,values,W,i-1,dp);
        return dp[i][W]; 
	}

	else{
	    dp[i][W] = max( values[i] + max_val(weights,values,W-weights[i],i-1,dp), max_val(weights,values,W,i-1,dp));
	    return dp[i][W];
	}

}

//bottom up approach/ iterative approach;
int bottom_up(vector<int> &weights, vector<int> &values,int W){
	
	int n = weights.size();
	int arr[n+1][W+1];

	for(int i=0; i<n+1; ++i){
		for(int j=0; j<W+1; ++j){
			if(i == 0 || j == 0) arr[i][j] = 0;

			else if(weights[i-1] <= j){
				arr[i][j] = max( values[i-1] + arr[i-1][j-weights[i-1]], arr[i-1][j]);
			}
			else{
				arr[i][j] = arr[i-1][j];
			}
		}
	}

	return arr[n][W]; 

}

int main(){

	int W = 50;

	vector<int> weights = {10,20,30};
	vector<int> values = {60, 100, 120};
	int n = values.size();
	
	int** dp;
    dp = new int*[n];
 
   
    for (int i = 0; i < n; i++)
        dp[i] = new int[W + 1];
 
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < W + 1; j++)
            dp[i][j] = -1;

	
	// cout<< max_val(weights,values,W,n-1,dp)<<endl;
	cout<<bottom_up(weights,values,W);


	return 0;
}