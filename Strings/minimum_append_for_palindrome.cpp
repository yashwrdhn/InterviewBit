#include <conio.h>
#include<bits/stdc++.h>

using namespace std;


//improve time complexity

bool ispalindrome(string s1){
	
	int l = s1.length();

	for(int i=0,j=l-1 ; i<=j ; ++i,--j){
		if(s1[i] != s1[j]){
			return 0;
		}
	}
	return 1;
}


int main(){
	

	string s= "abbcccefcccbb";

	int i=0;
	while(i != s.length()-2)
	{
		if(ispalindrome(s.substr(i) ))
		{
			cout<<"no of char required "<<i<<endl;
			break;
		}
		else{ ++i;}
	}
	getch();
	return 0;
}