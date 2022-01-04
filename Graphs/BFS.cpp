#include <conio.h>
#include<iostream>
#include <queue>
using namespace std;


void printBFS1(int** edges, int n, int sv){
	queue<int> pendingVertices;
	bool *visited = new bool[n];

	for(int i=0 ;i < n; ++i){
		visited[i] = false;
	}

	pendingVertices.push(sv);
	visited[sv] = true;

	while(pendingVertices.empty() == false){
		int currentVertex = pendingVertices.front();
		pendingVertices.pop();
		cout<< currentVertex << " " ;
		for(int i=0 ; i < n;++i){

			if(i == currentVertex){ continue;}

			if(edges[currentVertex][i] == 1 && !visited[i]){
				pendingVertices.push(i);
				visited[i] = true;
			}
		}

	}

	delete [] visited;



}

void printBFS2(int** edges,int n, int sv){

	queue<int> q;
	q.push(sv);
	bool *visited = new bool[n];

	for( int i = 0; i < n; ++i){
		visited[i] = false;
	}
	visited[sv] = true;
	while( !q.empty() ){
		int x = q.front();
		cout<<x<<" ";
		q.pop(); 
		
		for(int i = 0; i < n; ++i){
			if(i == x) continue;
			if(edges[x][i] == 1 && !visited[i]){
				q.push(i);
				visited[i] = true;
			}
		}
	}
}


int main(){
	
	int n;
	int e;
	cin >> n >> e;
	int** edges = new int*[n];

	for(int i=0; i < n; ++i){
		edges[i] = new int[n];
		for(int j = 0; j< n; j++){
			edges[i][j] = 0;
		}
	}

	for(int i = 0; i < e ; i++){
		int f,s;
		cin >> f >> s;
		edges[f][s] = 1;
		edges[s][f] = 1;
	}
	

	printBFS1(edges, n, 0);
	cout<<endl;
	printBFS2(edges, n, 0);
	
	for(int i=0; i < n; ++i){
		delete [] edges[i];
	}

	delete [] edges ;

	getch();
	return 0;
}
