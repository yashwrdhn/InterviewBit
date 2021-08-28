#include <conio.h>
#include<bits/stdc++.h>

using namespace std;


int main(){
	

	string s = "CZ";
	int l = s.length();

	double num = 0;
	
	for(int i=0; i < l ; ++i){
		
		num += (s[l-i-1]-'A'+ 1)*pow(26.0,i);	

	}

	cout<<num;

	getch();
	return 0;
}