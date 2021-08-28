#include <conio.h>
#include<bits/stdc++.h>

using namespace std;


int main(){
	
	int arr[] = { 1,2,3};
	int n = 3;


	int *output = new int[n];

	output[0] = 0;
	int buy = 0;

	for(int i=1; i<n; ++i){
		output[i] = 0;
		for(int j=i-1; j>= buy; --j){
			if(arr[j] > arr[i]){
				buy = i;
				continue;
			}

			int profit = arr[i] - arr[j];
			output[i] = max(output[i],profit);
			buy = i;
			
		}
	}

	int maxProfit;
	for(int i=0; i<n;++i){
		cout<<output[i]<<" ";
	}


	getch();
	return 0;
}
