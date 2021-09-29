#include <conio.h>
#include<bits/stdc++.h>

using namespace std;

int fib(int n, unordered_map<int, int> &memo){

	if(n <= 2){
		return 1;
	}

	if(memo[n]){
		return memo[n];
	}

	int fib_n = fib(n-1,memo) + fib(n-2,memo);
	memo[n] = fib_n;
	
	return fib_n;
}

int find_fibo(int n,vector<int> &memo){
    if ( n <= 2) return 1;
    
       
        if(memo[n] > 0){
            return memo[n];
        }

        int ans = ( find_fibo(n-1,memo) + find_fibo(n-2,memo))%(1000000007);
        cout<<ans<<endl;
        memo[n] = ans;
        return ans;
    
}

int main(){
	
	int n = 40;
	// unordered_map<int,int> memo;
	vector<int> memo(n+1);
	// cout<<memo[n];
	memo[0] = 0;
	memo[1] = 1;
	memo[2] = 1;
	// cout<<memo.size()<<" "<<memo[1]<<" "<<memo[11];
	cout << find_fibo(n,memo);
	
	getch();
	return 0;
}