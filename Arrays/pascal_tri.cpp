#include <conio.h>
#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> pascal_tri(int A){

	vector<int> temp;

    vector<vector<int>> pattern ; 
    
    pattern.push_back({1});
    pattern.push_back({1,1}); 

    for(int i=2 ; i < A ; ++i){
        
        temp.clear();
        temp.push_back(1);

        for(int j=1 ; j < i ; ++j){
        	int x = pattern[i-1][j-1]+pattern[i-1][j];
            temp.push_back(x);
            // cout<<x<<" ";
        }
        // cout<<"\n";
        temp.push_back(1);
        pattern.push_back(temp);
    }

    return pattern;
}


int main(){
	

	int n = 5;
	vector<vector<int>> pattern;

	pattern = pascal_tri(n);

	// show(pattern);

	for(int i=0;i < n; ++i){
		for(int j=0;j<pattern[i].size();++j){
			cout<<pattern[i][j]<<" ";
		}
		cout<<"\n";
	}

	getch();
	return 0;
}