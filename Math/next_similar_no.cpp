#include <bits/stdc++.h>
#include <conio.h>
using namespace std; 

int main(){

	string s1 = "816543";

	int l = s1.length();
	int temp;
	int index1=0;
	int index2=l-1;

	for(int j=l-1; j>0; --j){
		if(s1[j] > s1[j-1]){ index1 = j-1; break;}
	}

	for(int j=l-1; j>0; --j){
		if(s1[j] > s1[index1]){ index2 = j;break;} 
	}

	cout<<index1<<" "<<index2;

	temp = s1[index1];
	s1[index1] = s1[index2];
	s1[index2] = temp;
	cout<<"\n"<<s1<<"\n";
	sort(s1.begin()+index1+1,s1.end());
	cout<<s1;

	getch();
	return 0;
}