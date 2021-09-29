#include <conio.h>
#include<bits/stdc++.h>

using namespace std;
//use deque string '+' is slow then str.append() or str.push_back()


int main(){

	string s = "/../helloworld/how";
	deque<string> q;

	for(int i=0; i<s.length();++i){
			
			if(s[i] == '/') continue;

			if(s[i] == '.' && s[i+1] == '.'){
				// cout<<"popped : "<<q.top()<<endl;
				if(!q.empty()){ q.pop_back(); }
				i += 1;
				continue;
			}

			if(s[i] == '.' && s[i+1] == '/'){
				
				continue;
			}

            if(s[i] == '.' && i == s.length()-1){break;}

			else{
				int j = i;
				string s2 = "";
				while(s[j] != '/' && j<s.length()){
					s2 += s[j++];
				}
				// cout<<s2<<endl;
				if(s2.length()) q.push_back(s2);
				
				i = j;
			}

	}
	// cout<<"its over"<<endl;

	string rel_path = "";
	if(q.empty()){
		rel_path = "/";
		// cout<<rel_path<<endl;
        // return rel_path;
	}

	rel_path = "/";
	while(!q.empty()){
		rel_path.append(q.front());
		rel_path.push_back('/');
		q.pop_front();
	}
	rel_path.pop_back();	
	
	cout<<rel_path;
	getch();
	return 0;
}