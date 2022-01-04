#include <conio.h>
#include<bits/stdc++.h>

using namespace std;

void allConnectedComponents( int**edges, int n, int sv, vector<vector<int>> &all ){

	
}

int main(){
	
	int n,e;
	cin >> n >> e;

	int** edges = new int *[n];
	for(int i = 0 ; i < n; ++i){
		edges[i] = new int[n];
		for(int j = 0; j < n; ++j){
			edges[i][j] = 0;
		}
	}

	int f,s;
	cin >> f >> s;

	for(int i = 0; i < e; ++i){
		cin >> f>> s;
		edges[f][s] = 1;
		edges[s][f] = 1;

	}

	vector<vector<int>> all;
	allConnectedComponents( edges, n, 0, all);


	getch();
	return 0;
}