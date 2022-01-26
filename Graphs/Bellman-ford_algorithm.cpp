#include <bits/stdc++.h>

using namespace std;

int main(){

	int n, e;
	// cin >> n >> e;

	n = 5;
	e = 6;

	

	int** edges = new int*[n];
	for(int i = 0 ; i < n; ++i){

		edges[i] = new int[n];
		for(int j = 0; j < n; ++j){
			edges[i][j] = 0;
		}
	}

	edges[1][2] = 1;
	edges[2][3] = 2;
	edges[4][3] = 4;
	edges[1][0] = 1;
	edges[3][0] = 3;
	edges[2][4] = 2;

	// int f,s;
	// for ( auto x: edge_pairs){

	// 	f = x.first;
	// 	s = x.second;

	// 	edges[f][s] = 1;
	// }

	for(int i = 0 ; i < n; ++i){
		for(int j = 0; j < n; ++j){
			cout << edges[i][j]<< " ";
		}
		cout<<endl;
	}

	return 0;
}