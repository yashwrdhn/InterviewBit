#include <conio.h>
#include<bits/stdc++.h>

using namespace std;


int main(){
	
	vector<int> arr = {1,1,0,1,1,0,0,1,1,1};
	int m = 1;

	int zeroes = 0;
	for(int i=0; i < arr.size(); ++i){
		if( arr[i] == 0){
			zeroes += 1;
		}
	}

	// cout<<"zeroes:"<<zeroes<<endl;

	if(zeroes <= m){
		cout<<arr.size();
	}

	int intial_index = 0;
	int max_sum = 0;
	int sum = 0;
	int ways = zeroes - m + 1;
	int start = 0;
	int end = 0;

	while(ways--){

		int flips = m;
		sum = 0;
		int i = intial_index;
		start = i;
		while(i < arr.size()){

			
			if (arr[i] == 0 and flips == m){
				intial_index = i+1;
				
			}

			if(flips == 0  && arr[i] == 0){
				
				break;
			}

			if(arr[i] == 0){
				flips--;
			}
			
			sum += 1;
			i++;

		}

		// cout<<sum<<endl;

		if( sum > max_sum){
			max_sum = sum;
			end = i;
		}

	}

	cout<<start<<" "<<end<<endl;
	 for(int i=start; i<end ;++i){
        arr[i] = i;
        cout<<i<<endl;
    }
    cout<<end;
	 // vector<int> v = vector<int>(arr.begin()+start,arr.begin()+end);
	 // cout<<v.back();

	getch();
	return 0;
}