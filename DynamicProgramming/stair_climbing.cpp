#include <conio.h>
#include<bits/stdc++.h>

using namespace std;

int count_ways(int n, vector<int> &memo){

	if(n <= 2 ) return n;
	
	if(memo[n] != 0) return memo[n];
	else
	{ memo[n] =  count_ways(n-1,memo)+count_ways(n-2,memo);}
	
	return memo[n];
}

int main(){
	
	int n = 4;
	vector<int> memo(n+1,0);
	cout<< "no of ways : "<<count_ways(n,memo);

	getch();
	return 0;
}