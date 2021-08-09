#include <bits/stdc++.h>
#include <conio.h>
using namespace std; 

int myCompare(string s1,string s2){

	string s12 = s1.append(s2);
	string s21 = s2.append(s1);

	return s12.compare(s21) > 0 ? 1 : 0;
}

int main(){

	vector<int> v = {3,9,12,5,0};
	//required answer is 953240

	vector<string> v2 ;
	
	for(int i=0; i<v.size(); ++i){

		v2.push_back(to_string(v[i]));
	}

	sort(v2.begin(),v2.end(),myCompare);
	
	for(int i=0; i<v2.size(); ++i) cout<<v2[i];

	getch();
	return 0;
}