#include <bits/stdc++.h>

using namespace std;

int find_lcs( string a, string b, int m, int n){
    
    
    vector< vector<int>> dp(m+1, vector<int>(n+1,-1));
    
    
    for(int i = 0; i < m+1; ++i) dp[i][0] = 0;
    for(int i = 0; i < n+1; ++i) dp[0][i] = 0;
    
    for(int i = 1; i < m+1; ++i) {
        for(int j = 1; j < n+1; ++j){
            if(a[i-1] == b[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else{
                dp[i][j] = max( dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    for(int i = 0; i < m+1; ++i) {
        for(int j = 0; j < n+1; ++j){ cout << dp[i][j] << " "; }
        cout<<endl;
    }
   return dp[m][n];
}

int main() {
    string a  = "abcfghdef";
    string b = "abcfdvgdef";
    int m  = a.length();
    int n = b.length();
    
    int lcs_length = find_lcs(a, b, m, n);
    int ans = m+n - lcs_length;
    cout << ans;
    
    return 0;
}