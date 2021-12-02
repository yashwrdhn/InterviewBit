//can do better / you generated all the combinations 2^(n+1) ;; you need to only nCr 

#include <conio.h>
#include<bits/stdc++.h>

using namespace std;

void show(vector<int> &subset){

	vector<int>::iterator itr = subset.begin();

	while(itr != subset.end()){
		cout<<*itr++<<" ";
	}
	cout<<endl;
}


void find_subset(vector<int> &arr,int i,vector<vector<int>> &all, vector<int> subset){

	all.push_back(subset);
	// show(subset);

	for(int j=i; j<arr.size();++j){
		subset.push_back(arr[j]);
		find_subset(arr,j+1,all,subset);
		subset.pop_back();
	}


}


int main(){
	
	vector<int> arr = {15, 20, 12, 19, 4};
	int k = 3;
	vector<vector<int>> all ;
	vector<vector<int>> all_k;

	int index = 0;
	find_subset(arr,index,all,{});

	cout<<all.size()<<endl;

	for(int i=0 ;i<all.size();++i){
		sort(all[i].begin(),all[i].end());
		// show(all[i]);
	}
	sort(all.begin(),all.end());
	
	for(int i=0 ;i<all.size();++i){
		
		if(all[i].size() == k){
			all_k.push_back(all[i]);
			// show(all[i]);
		}
		
	}

	getch();
	return 0;
}