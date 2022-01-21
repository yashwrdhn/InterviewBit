#include <bits/stdc++.h>

using namespace std;


int find_scs( string a, string b, int m, int n){
    
    
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
    int i = m;
    int j = n;
    string scs = "";
    while( i > 0 && j > 0){
        if( a[i-1] == b[j-1]) { 
            scs += (a[i-1]);
            i -= 1;
            j -= 1;
        }
        else{ 
            
            
            if( dp[i-1][j] > dp[i][j-1]){ 
                scs += a[i-1];
                i -= 1;
                
            }
            else { 
                scs += b[j-1];
                j -= 1;}
            
        }
    }
    while( i > 0){
        scs += a[i-1];
        i -= 1;
    }
    while(j > 0){
        scs += b[j-1];
        j -= 1;
    }
    reverse(scs.begin(), scs.end());
    cout << scs<<endl;
    return 0;
}

int main(){
    
    string a = "defc";
    string b = "aebcc";
   
    
    int m = a.length();
    int n = b.length();
    
    int scs_length = find_scs(a, b, m, n);
    // cout<< lcs_length;
    
    return 0;
}