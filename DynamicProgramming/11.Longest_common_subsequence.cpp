#include<bits/stdc++.h>

using namespace std;

int recursive_lcs(string x, string y, int n, int m){

	// cout<< x.substr(n) << " "<< y.substr(m) << endl;
	if( n == 0 || m == 0) return 0;

	if( x[n-1] == y[m-1]){
		return 1 + recursive_lcs( x, y, n-1, m-1);
	}
	else{
		return max( recursive_lcs( x, y, n, m-1),
			recursive_lcs( x, y, n-1, m));
	}

}

int memo_lcs(string x, string y, int n, int m, vector<vector<int>> &dp){


	// cout<< x.substr(0,n) << " "<< y.substr(0,m) << endl;
	if(dp[m][n] != -1)  return dp[m][n];

	if(n == 0 || m == 0) return 0;
	else if( x[n-1] == y[m-1]){
		dp[m][n] =  1 + memo_lcs( x, y, n-1, m-1,dp);
		
	}
	else{
		dp[m][n] =  max( memo_lcs( x, y, n, m-1, dp),
							memo_lcs( x, y, n-1, m, dp));
		
	}
	return dp[m][n];
}

int main(){

	string x = "abcdgsdfghj";
	string y = "abedgfgh";

	int n = x.length();
	int m = y.length();
	//given 2 string find length of longest common subsequence. here ans is 4 abdh.
	cout<<"recursive method :" <<recursive_lcs(x, y, n, m)<< endl;


	vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
	cout<<"memoized version : "<< memo_lcs(x,y,m,n,dp);	

	
	return 0;
}