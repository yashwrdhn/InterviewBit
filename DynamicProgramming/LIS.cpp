#include <conio.h>
#include<bits/stdc++.h>

using namespace std;


int LIS(int*arr , int n){
	int *output = new int[n];

	output[0] = 1;
	for(int i=1; i<n; ++i){
		output[i] = 1;

		for(int j=i-1; j>=0; --j){

			if(arr[j] > arr[i]){
				continue;
			}
			int possibleAns = output[j]+1;
			output[i] = max(output[i],possibleAns);
		}
	}

	int best = 0;
	for(int i=0; i<n; ++i){
		best = max(best,output[i]);
	}

	delete [] output;
	return best;
}


int main(){
	
	int arr[100] = {4,3,9,7,6,8,20};
	int n = 7;
	int ans = LIS(arr,n);

	cout<<ans<<endl;

	getch();
	return 0;
}