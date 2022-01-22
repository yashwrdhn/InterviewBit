#include <bits/stdc++.h>

using namespace std;

void min_heapify( vector<int> &nums, int i, int n);
void show(vector<int> nums, int i);

int main(){

	vector<int> nums = {-1,4,5,1,6,7,3,2};

	

	int n = nums.size()-1;
	show(nums, n);
	for(int i = n/2; i > 0; --i){
		min_heapify(nums, i, n);
		
		show(nums, n);
	}

	return 0;
}


void show(vector<int> arr, int n){

	for( auto itr = arr.begin()+1; itr != arr.end(); ++itr){
		cout<<*itr<<" ";
	}
	cout<<endl;
}

void min_heapify( vector<int> &nums, int i, int N){

	int left = 2*i;
	int right = 2*i + 1;
	int smallest = i;

	if(left <= N && nums[left] < nums[i]){
		smallest = left;
	}

	if(right <= N && nums[right] < nums[smallest]){
		smallest = right;
	}

	if(i != smallest){
		swap( nums[i], nums[smallest]);
		min_heapify(nums, smallest, N);
	}

}