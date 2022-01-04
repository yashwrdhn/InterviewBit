//pre test passsed only. not for directed graph and disconnected graph

#include <conio.h>
#include<bits/stdc++.h>

using namespace std;

bool hasCycle( int** edges, int n, int sv,int pv, bool* visited ){

	

	if(visited[sv] == true) return 1;
	visited[sv] = true;
	cout<<" current vertex : "<<sv<<endl;
	for(int i = 0; i < n; ++i){
		
		if( i == pv || i == sv){ continue;}
		else if( edges[sv][i] == 1 ){
			int op =  hasCycle(edges, n, i ,sv, visited);
			if(op == 1) cout<<"cycle detected : " <<1<<endl;
		}
	}
	
	return 0;
}

int main(){
		
	int e,n;
	cin >> n >> e; 

	int** edges = new int*[n];
	for(int i = 0; i < n; ++i){
		edges[i] = new int[n];
		for(int j = 0; j < n; ++j){
			edges[i][j] = 0;
		}
	}

	bool *visited = new bool[n];

	for(int i = 0; i < n; ++i){
		visited[i] = false;
	} 

	int f,s;
	for(int i = 0; i < e; ++i){
		cin>>f>>s;
		edges[f][s] = 1;
		edges[s][f] = 1;
	}
	cout<<hasCycle(edges, n, 0,0, visited);

	getch();
	return 0;
}