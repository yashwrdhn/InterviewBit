#include <conio.h>
#include<bits/stdc++.h>
#include <string.h>
using namespace std;


//incomplete 

void print_subs(string s1,string s2){

	if(!s1.length()){
		cout<<s2<<endl;
		return;
	}

	string input  = input.substr(1);

	print_subs(input,s2);

	s2 += s1[0];
	print_subs(input,s2);

}

int main(){
	
	string s  = "abcd";
	string output = "";
	print_subs(s,output);
	getch();
	return 0;
}
