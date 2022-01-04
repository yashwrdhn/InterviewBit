#include <conio.h>
#include<bits/stdc++.h>

using namespace std;

bool findpathDFS(int **edges, int v, int sv, int fv, int* visited){

	cout<<sv<<" ";
	visited[sv] = 1;
	
	if(sv == fv) return 1;
	
	for(int i = 0; i<v ; ++i){
		if(i == sv) continue;
		else if( edges[i][sv] & !visited[i]){
			return findpathDFS(edges, v, i, fv, visited);
		}
		
	}
	return 0;
}

int main(){

	int v,e;
	cin>> v >> e;

	
	int** edges = new int*[v];
	for(int i = 0 ; i < v; ++i){
		edges[i] = new int[v];
		for(int j = 0; j < v; ++j){
			edges[i][j] = 0;
		}
	}

	int f,s;
	for(int i = 0 ; i < e; ++i){
		
		cin >> f >> s;
		edges[f][s] = 1;
		edges[s][f] = 1;
	}

	int v1,v2 ;
	cin >> v1 >> v2;
	int* visited = new int[v];
	for(int i = 0; i<v; ++i){
		visited[i] = 0;
	}
	cout<< " path found : "<<findpathDFS(edges,v, v1,v2, visited);


	getch();
	return 0;
}
