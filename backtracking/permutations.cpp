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



void find_p(vector<int> &arr,vector<vector<int>> &all,vector<bool> &chosen,vector<int> set){

	if(set.size() == arr.size()){
		all.push_back(set);
		return;
	}

	for(int i=0; i<arr.size();++i){
		if(chosen[i]) continue;
		chosen[i] = true;
		set.push_back(arr[i]);
		find_p(arr,all,chosen,set);
		chosen[i] = false;
		set.pop_back();
	}
}


int main(){
	
	vector<int> arr = {2,4,5};
	vector<bool> chosen(arr.size(),false);
	vector<vector<int>> all ;

	find_p(arr,all,chosen,{});

	//sorting
	for(int i=0 ;i<all.size();++i){
		// sort(all[i].begin(),all[i].end());
		show(all[i]);
	}

	getch();
	return 0;
}