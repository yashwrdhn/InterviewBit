/*
	
Unbounded knapsack 1 - Rod cutting

Given a rod of length n inches and an array of prices that includes prices of all pieces of size smaller than n. Determine the maximum value obtainable by cutting up the rod and selling the pieces.

length   | 1   2   3   4   5   6   7   8  
--------------------------------------------
price    | 1   5   8   9  10  17  17  20

ans = 22


link - https://www.geeksforgeeks.org/cutting-a-rod-dp-13/


*/

#include <bits/stdc++.h>
using namespace std;


int bottomup_max_price(int len[], int price[], int l, int n){
    
    vector< vector<int>> dp(n+1, vector<int> (l+1,-1));
    for(int i = 0; i < n+1; ++i){ dp[i][0] = 0; }
    for(int j = 0; j < l+1; ++j){ dp[0][j] = 0; }
    for(int i = 1; i < n+1 ; ++i){
        for(int j = 1; j < l+1; ++j){
            if( len[i-1] > j){
                dp[i][j] =  dp[i-1][j];
            }
            else{
                dp[i][j] =  max(dp[i-1][j], price[i-1] + dp[i][j - len[i-1]]);
            }
        }
    }
    return dp[n][l];
}

int main() {
    
    int Length = 8;
    int len[8] = { 1,2,3,4,5,6,7,8};
    int price[8] = {3,5,8,9,10, 17, 17, 20};
    int n = sizeof(len)/sizeof(n);
    
//     cout << "using recursion: "<<recursive_max_ways(weights,sum, n) << endl;
    
//     vector< vector<int>> dp(n+1, vector<int> (sum+1,-1));
 
//     cout << "using memoized recursion (top down): "<< memo_max_ways(weights, sum, n, dp)<<endl;
    cout << "using bottom up: "<< bottomup_max_price(len, price, Length, n);
    
}