/*
	0-----1
    |    /|\
    |   / | \  
    |  /  |  2
    | /   | /
    |/    |/
    4-----3

*/ 
//incomplete and 

#include <conio.h>
#include<bits/stdc++.h>

using namespace std;

void initialize(vector<vector<bool>> graph, int nodes){

    for(int i=0; i<nodes; ++i){
        for(int j=0; j<nodes; ++j){
            graph[i][j] = 0;
        }
    }
}

void showGraph(vector<vector<bool>> graph,int nodes){

    for(int i=0; i<nodes; ++i){
        auto itr = graph[i].begin();
        while(itr != graph[i].end()){

            cout<<*itr++<<"->";
        }
        cout<<endl;
    }

}

int main(){

    int nodes = 5,edges = 7;
    
    vector<vector<bool>> graph();
    
    initialize(graph,nodes);

    int x,y;
    for( int i=0; i<edges; ++i){
        cin>>x>>y;
        graph[x][y] = 1;
    }

    showGraph(graph,nodes);    

	getch();
	return 0;
}
