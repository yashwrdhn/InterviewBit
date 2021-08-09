#include <bits/stdc++.h>

using namespace std;

int main(){

	//8x8 chess board find bishops possible moves for a given pair coordinatees
	int row=2,col=1;

	//reduce rows
	int rt = row - 1;
	int cs = col - 1;
	int rb = 8 - row;
	int ce = 8 - col;
	int sum =  min(rt,cs)+ min(rt,ce) + min(rb,cs) + min(rb,ce);
	cout<<sum;
	return 0;
}