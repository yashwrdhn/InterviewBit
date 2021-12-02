//it works too

#include <conio.h>
#include<bits/stdc++.h>

using namespace std;

void show(vector<int> subset){

	vector<int>::iterator itr = subset.begin();

	while(itr != subset.end()){
		cout<<*itr++<<" ";
	}
	cout<<endl;
}


void find_subset(vector<int> &arr,int i,set<vector<int>> &all, vector<int> subset){

	sort(subset.begin(),subset.end());
	all.insert(subset);
	// show(subset);

	for(int j=i; j<arr.size();++j){
		subset.push_back(arr[j]);
		find_subset(arr,j+1,all,subset);
		subset.pop_back();
	}


}


int main(){
	
	vector<int> arr = {1,2,2};

	// vector<vector<int>> all ;
	set<vector<int>> all;

	int index = 0;
	find_subset(arr,index,all,{});

	cout<<all.size()<<endl;

	auto itr = all.begin();

	while(itr != all.end()){
		show(*itr);
		itr++;
	}

	getch();
	return 0;
}