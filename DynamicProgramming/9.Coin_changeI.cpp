/*
 Q : Given a value N, if we want to make change for N cents, and we have infinite supply of each of S = { S1, S2, .. , Sm} valued coins, how many ways can we make the change? The order of coins doesn’t matter.
 
 for N = 4 and S = {1,2,3}, there are four solutions: {1,1,1,1},{1,1,2},{2,2},{1,3}. So output should be 4.
 For N = 10 and S = {2, 5, 3, 6}, there are five solutions: {2,2,2,2,2}, {2,2,3,3}, {2,2,6}, {2,3,5} and {5,5}. So the output should be 5.
 link :  https://www.geeksforgeeks.org/coin-change-dp-7/
*/

#include <bits/stdc++.h>
using namespace std;

int recursive_max_ways(int coins[],int sum, int n){
    
    if( n == 0) return 0;
    if( sum == 0) return 1;
    
    if( coins[n-1] > sum){
        return recursive_max_ways(coins, sum, n-1);
    }
    else{
        return recursive_max_ways( coins, sum, n-1) + 
                   recursive_max_ways(coins, sum - coins[n-1], n);
    }
} 

int memo_max_ways(int coins[],int sum, int n, vector<vector<int>> dp){
    
     if( n == 0) return 0;
     if( sum == 0) return 1;
        
        
    if( dp[n][sum] != -1) return dp[n][sum];
    
    if( coins[n-1] > sum){
        dp[n][sum] = memo_max_ways(coins, sum, n-1, dp);
    }
    else{
        dp[n][sum] = memo_max_ways( coins, sum, n-1, dp) + 
                   memo_max_ways(coins, sum - coins[n-1], n, dp);
    }
    return dp[n][sum];
    
}

int bottomup_max_val(int coins[], int sum, int n){
    
    vector< vector<int>> dp(n+1, vector<int> (sum+1,-1));
    for(int i = 0; i < n+1; ++i){ dp[i][0] = 1; }
    for(int j = 0; j < sum+1; ++j){ dp[0][j] = 0; }
    for(int i = 1; i < n+1 ; ++i){
        for(int j = 1; j < sum+1; ++j){
            if( coins[i-1] > j){
                dp[i][j] =  dp[i-1][j];
            }
            else{
                dp[i][j] =  dp[i-1][j] + dp[i][j - coins[i-1]];
            }
        }
    }
    return dp[n][sum];
}


int main() {
    
    int weights[] = {1,2,5};
    // int val[] = {1,2,5};
    int sum = 7;
    int n = 3;
    cout << "using recursion: "<<recursive_max_ways(weights,sum, n) << endl;
    
    vector< vector<int>> dp(n+1, vector<int> (sum+1,-1));
 
    cout << "using memoized recursion (top down): "<< memo_max_ways(weights, sum, n, dp)<<endl;
    cout << "using top down: "<< bottomup_max_val(weights, sum, n);
    
}