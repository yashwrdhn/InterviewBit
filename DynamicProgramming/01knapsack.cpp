#include <bits/stdc++.h>
using namespace std;

int recursive_max_val(int weights[], int val[], int W, int n){
    
    if( n == 0 || W == 0) return 0;
    
    if( weights[n-1] > W){
        return recursive_max_val(weights, val, W, n-1);
    }
    else{
        return max( recursive_max_val(weights, val, W, n-1), 
                   val[n-1] + recursive_max_val(weights, val, W - weights[n-1], n-1));
    }
} 

int memo_max_val(int weights[], int val[], vector<vector<int>> dp,  int W, int n ){
    
    if( n == 0 || W == 0) return 0;
    
    if( dp[n][W] != -1) return dp[n][W];
    
    if( weights[n-1] > W){
        dp[n][W] =  memo_max_val(weights, val,dp, W, n-1);
    }
    else{
        dp[n][W] =  max( memo_max_val(weights, val,dp, W, n-1), 
                   val[n-1] + memo_max_val(weights, val,dp, W - weights[n-1], n-1));
    }
    return dp[n][W];
    
}

int bottomup_max_val(int weights[], int val[], int W, int n){
    
    vector< vector<int>> dp(n+1, vector<int> (W+1,-1));
    for(int i = 0; i < n+1; ++i){ dp[i][0] = 0; }
    for(int j = 0; j < W+1; ++j){ dp[0][j] = 0; }
    for(int i = 1; i < n+1 ; ++i){
        for(int j = 1; j < W+1; ++j){
            if( weights[i-1] > j){
                dp[i][j] =  dp[i-1][j];
            }
            else{
                dp[i][j] =  max( dp[i-1][j], val[i-1] + dp[i-1][j - weights[i-1]]);
            }
        }
    }
    return dp[n][W];
}


int main() {
    
    int weights[] = {10,20,30,40};
    int val[] = {60,100,120,21};
    int W = 70;
    int n = 4;
    cout << "using recursion: "<<recursive_max_val(weights, val, W, n) << endl;
    
    vector< vector<int>> dp(n+1, vector<int> (W+1,-1));
 
    cout << "using memoized recursion (top down): "<< memo_max_val(weights, val, dp, W, n)<<endl;
    cout << "using top down: "<< bottomup_max_val(weights, val,W, n);
    
}