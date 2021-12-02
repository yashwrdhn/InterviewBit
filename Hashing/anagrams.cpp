//incomplete

#include <conio.h>
#include<bits/stdc++.h>

using namespace std;


int main(){
	
	map<int,int> anagram;
	map<int,vector<int>> groups;
	vector<string> words;
	words.push_back("cat");
	words.push_back("dog");
	words.push_back("god");
	words.push_back("tac");

	for(int i=0; i<words.size(); ++i){

		int ascii = 0;
		for(int j=0; j< (words[i]).length();++j){
			 ascii += words[i][j];
		}

		if(anagram.find(ascii) != anagram.end()){
			// groups[ascii].push_back(words[i]);
			cout<<words[i]<<endl;
		}
		else{ 
			// groups.insert(pair<int,vector<int>>(ascii,{words[i]}));
			cout<<words[i]<<endl;
			anagram[ascii] += 1; }

	}


	// for(int i=0; i<groups.)

	getch();
	return 0;
}