#include <conio.h>
#include<bits/stdc++.h>

using namespace std;


void find_paths(int arr[4][4],int sr,int sc,int dr,int dc,bool visited[4][4],string pfs){

	if(arr[sr][sc] == 0 || visited[sr][sc] == 1){
		cout<<sr<<" "<<sc<<" "<<dr<<" "<<dc<<endl;
		return;
	}	

	cout<<sr<<" "<<sc<<" "<<dr<<" "<<dc<<endl;
	if(sr == dr && sc == dc){
		cout<<pfs<<endl;
		return;
	}

	//down
	if(sr+1 <= dr){
		
		find_paths(arr,sr+1,sc,dr,dc,visited,pfs+'V');
		visited[sr+1][sc] = 1;

	}
	//right
	if(sc+1 <= dc){
		
		find_paths(arr,sr,sc+1,dr,dc,visited,pfs+'H');
		visited[sr][sc+1] = 1;
	}

	//left
	if(sc-1 >= 0){
		
		find_paths(arr,sr,sc+1,dr,dc,visited,pfs+'H');
		visited[sr][sc-1] = 1;
	}

	//up
	if(sr-1 >= 0 ){
		
		find_paths(arr,sr,sc+1,dr,dc,visited,pfs+'H');
		visited[sr-1][sc] = 1;
	}


}


//we cant walk on elements which are marked zero
// we need to find atleast one path
//we can go in all 4 directions--- will have to be careful with infinite recursion

int main(){
	
	int arr[4][4] = {
		{1,0,1,1},
		{1,1,1,1},
		{1,0,1,1},
		{1,1,0,1},
	};

	bool visited[4][4] = {0,0,0,0};

	find_paths(arr,0,0,3,3,visited,"");


	getch();
	return 0;
}