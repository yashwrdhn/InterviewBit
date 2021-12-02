
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


// int find_sum(vector<int> &subset){

// 	vector<int>::iterator itr = subset.begin();
// 	int sum1 = 0;
// 	while(itr != subset.end()){
// 		sum1 += *itr;
// 		itr++;
// 	}
	
// 	return sum1;

// }

void find_sum(vector<int> &arr,vector<vector<int>> &all,vector<int> combination,int index,int t){

	for(int i=index; i <arr.size();++i){

		if(t-arr[i] == 0 ){
			show(combination);
			combination.push_back(arr[i]);
			all.push_back(combination);
			combination.pop_back();
			return;
		}
		else if(t-arr[i] < 0){
			combination.pop_back();
			return;
		}
		else{
			combination.push_back(arr[i]);
			find_sum(arr,all,combination,i,t-arr[i]);
		}
	}
}



int main(){
	
	vector<int> arr = {3,4,7};
	int t = 7;
	vector<vector<int>> all ;


	find_sum(arr,all,{},0,t);

	for(int i=0; i<all.size(); ++i){
		show(all[i]);
	}


	getch();
	return 0;
}