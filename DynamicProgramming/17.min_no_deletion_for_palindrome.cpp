#include <bits/stdc++.h>

using namespace std;

int find_lcs( string a, string b,  int m, int n){
    
    vector<vector<int>> dp(m+1, vector<int> (n+1, -1));
    
    for(int i = 0 ; i < m+1; ++i){ dp[i][0] = 0;}
    for(int j = 0 ; j < n+1; ++j){ dp[0][j] = 0;}

    
    for(int i = 1 ; i < m+1; ++i){ 
        for(int j = 1 ; j < n+1; ++j){ 
            if(a[i-1] == b[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else{
                dp[i][j] = max( dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    return dp[m][n];
}



int main(){
    
    string a = "absddsg";
    string b = a;
    
    reverse(b.begin(), b.end());
    
    int m = a.length();
    int n = b.length();
    
    int lcs_length = find_lcs(a, b, m, n);
    
    int ans  = a - lcs;
    cout<< "minimum deletion : "<<ans;
    
    return 0;
}