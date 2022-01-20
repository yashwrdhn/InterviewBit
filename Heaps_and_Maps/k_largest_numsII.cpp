#include <bits/stdc++.h>

using namespace std;

int main(){


	vector<int> nums = {1,3,4,2,6,1,17};
	int b = 3;
	//ans should be 17,6,4

	priority_queue<int> pq(nums.begin(), nums.end());
	
	vector<int> ans;

	while(b--){
		ans.push_back(pq.top());
		pq.pop();
	}

	for( auto x: ans ){
		cout<<x<<endl;
	}

	return 0;
}