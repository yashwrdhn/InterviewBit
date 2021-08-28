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

int main(){
	
	int n = 9;
	unordered_map<int,int> memo;
	
	cout << fib(n,memo);
	
	getch();
	return 0;
}