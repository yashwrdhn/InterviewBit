#include <conio.h>
#include<bits/stdc++.h>

using namespace std;


//proactive way ; theres a reactive way too
void find_paths(int sr,int sc,int dr,int dc,string pfs){
	
	cout<<sr<<" "<<sc<<endl;
	if(sr == dr && sc == dc){
		cout<<pfs<<endl;
		return;
	}

	if(sr+1 <= dr){
		find_paths(sr+1,sc,dr,dc,pfs+'H');
	}
	if(sc+1 <= dc){
		find_paths(sr,sc+1,dr,dc,pfs+'V');
	}
	

}

int main(){
	
	int sr = 1;
	int sc = 1;
	int dr = 3;
	int dc = 3;

	//from 1,1 to 3,3 total of 6paths are possible
	
	find_paths(sr,sc,dr,dc,"");




	getch();
	return 0;
}