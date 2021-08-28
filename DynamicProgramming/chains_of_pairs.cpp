#include <conio.h>
#include<bits/stdc++.h>

using namespace std;



int main(){
	
	vector<vector<int>> arr = {
	  {98, 894 },
	  {397, 942 },
	  {70, 519 },
	  {258, 456 },
	  {286, 449 },
	  {516, 626 },
	  {370, 873 },
	  {214, 224 },
	  {74, 629  },
	  {265, 886 },
	  {708, 815 },
	  {394, 770 },
	  {56, 252 },
	};

	int n = arr.size();


	
	int *output = new int[n];
	output[0] = 1;

	for(int i=1; i<n ;++i){
		output[i] = 1;
		for(int j=i-1; j>=0; --j){

			if(arr[j][1] < arr[i][0] && arr[j][0] < arr[i][0]) {
				int possibleAns = output[j]+1;
				output[i] = max(output[i],possibleAns);
			}

		}
	}
	int best = 0;
	for(int i=0; i <n; ++i){
		cout<<output[i]<<" ";
		best = max(best,output[i]);
	}
	cout<<endl;
	cout<<best;
	getch();
	return 0;
}