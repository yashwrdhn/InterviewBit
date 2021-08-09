#include<conio.h>
#include<bits/stdc++.h>

using namespace std;

void show(vector<string> s1){
	for(int i=0; i<s1.size();++i){
		cout<<s1[i]<<"\n";
	}
}

int myCompare(string s1,string s2){
	return (s1.length() >= s2.length()) ? 0:1;
}

int main(){

	vector<string> s1= {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
		"aaaaaaaaaaaaaaaaaaaaaaaaaa", 
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", 
		"aaaaaaaaaaaaaaaaaaaaaa", 
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", 
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", 
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", 
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", 
		"aaaaaaaaaaaaaaaaaaaaaa", 
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", 
		"aaaaaaaaaaaaaaaaaaaaaaaaa", 
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", 
		"aaaaaaaaaaaaaaaaaaa", 
		"aaaaaaaaaaaaaaaaaaaa", 
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", 
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", 
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", 
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", 
		"aaaaaaaaaaaaaaaaaaaaa", 
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", 
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", 
		"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa" 

	};

	if(s1.size() == 1) cout<<s1[0]; 
		sort(s1.begin(),s1.end(),myCompare);
	// show(s1); 

	int p1 = 0;
	int p2 = 1;

	while(p1<=p2 && p2<s1.size()){
		if(s1[p1].length() == s1[p2].length()){
			p2++;
		}

		else if(s1[p1].length() < s1[p2].length()){
			sort(s1.begin()+p1,s1.begin()+p2);
			p1++;
		}
	}
	sort(s1.begin()+p1,s1.begin()+p2);

	
	string common_prefix = "";

	int i=0;
	while(s1.front()[i] == s1.back()[i]){
		common_prefix += s1.front()[i++];
	}
	cout<<common_prefix;
	

	getch();
	return 0;
}