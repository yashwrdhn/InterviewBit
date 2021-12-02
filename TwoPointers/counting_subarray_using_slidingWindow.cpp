#include <conio.h>
#include<bits/stdc++.h>

using namespace std;

void show(vector<int> arr,int k,int j){
	for(int i=k; i<=j; ++i){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	
	vector<int> arr = { 1,11,2,3,15};
	int b = 10;

	int i = 0;
	int j = 0;
	int count = 0;
	int sum = 0;

	sort(arr.begin(),arr.end());

	while(i <= j  ){

		if(sum + arr[j] < b){
			sum += arr[j];
			
			count += j-i+1;
			cout<<"count : "<<count<<endl;
			show(arr,i,j);

			j++;
		}
		else{
			i++;
		}
	}
	cout<<count<<endl;
	getch();
	return 0;
}