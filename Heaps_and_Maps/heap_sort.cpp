#include <bits/stdc++.h>

using namespace std;

void show(vector<int> arr, int n){

	for( auto itr = arr.begin()+1; itr != arr.end(); ++itr){
		cout<<*itr<<" ";
	}
	cout<<endl;
}

void max_heapify(vector<int> &arr,int i,int N){
	
	int left = i*2;
	int right = i*2 +1;
	int largest = i;

	if( left <= N && arr[i] < arr[left]){
		largest = left;
	} 

	if( right <= N && arr[right] > arr[largest]){
		largest = right;
	}

	if(i != largest){
		swap(arr[i],arr[largest]);
		max_heapify(arr, largest, N);
	}
}

int main(){

	vector<int> nums = { -1, 4,3,7,1,8,5};
	int n = nums.size()-1;

	//build max heap
	for(int i = n/2; i > 0; --i){
		max_heapify(nums, i, n);
	}

	show(nums,n);
	//sort the heap
	for(int i = n; i >=2 ; --i){

		swap( nums[1], nums[n]);
		n -= 1;
		max_heapify(nums,1, n);
		show(nums, nums.size());
	}


	return 0;
}