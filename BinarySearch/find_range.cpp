#include <conio.h>
#include<bits/stdc++.h>

using namespace std;


void find(vector<int> &arr,vector<int> &range, int e, int start, int end){

	if(start > end) return;

	int mid = start + (end-start)/2 ;

	cout<<"current mid element"<<arr[mid]<<endl;

	if(arr[mid] == e){
		range.push_back(mid);

		find(arr,range,e,start,mid-1);
		find(arr,range,e,mid+1,end);

	}

	else if(arr[mid] > e){
		end = mid-1;
		find(arr,range,e,start,end);
	}

	else{
		start = mid+1;
		find(arr,range,e,start,end);
	}

}

int main(){
	
	vector<int> arr = {5,7,7,8,8,10};
	int e = 9;
	int start = INT_MAX;
	int end = INT_MIN;
	vector<int> range;

	find(arr, range, e, 0, arr.size()-1);


	if(range.size() == 0){
		cout<<-1;
	}
	else {
		for(int i = 0 ; i < range.size(); ++i){

			start = min(start,range[i]);
			end = max(end,range[i]);
		}

		cout<<start<<" "<<end<<endl;
	}


	getch();
	return 0;
}