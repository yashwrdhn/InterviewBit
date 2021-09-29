//incomplete

#include <conio.h>
#include<bits/stdc++.h>

using namespace std;


int main(){
	
	int x = 2876;
	//ans is MMMMMM DIII LXX VI
	string s1000,s100,s10,s1 ;

	ordered_map<pair(int,char)> roman = {
		(1,'I'),
		(5,'V'),
		(10,'X'),
		(50,'L'),
		(100,'C'),
		(500,'D'),
		(1000,'M')
	};

	cout<<roman[10];

	getch();
	return 0;
}
