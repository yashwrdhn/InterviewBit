#include <conio.h>
#include<bits/stdc++.h>

using namespace std;


int main(){
	
	vector<int> A = { 0,1,1,0,0,1};
	unordered_map<int,int> hash;

	int sum = 0;
	int max_len = 0;
	int end_index = 0;


	for(int i=0; i<A.size(); ++i){
		A[i] = (A[i] == 0) ? -1:1;
	}

	for(int i=0; i<A.size(); ++i){
		sum += A[i];

		if(sum == 1){
			max_len = i+1;
			end_index = i;
		}

		if(hash.find(sum-1) != hash.end()){

			cout<<"found something"<<sum-1<<" :"<<hash[sum-1]<<endl	;
			if(max_len < i- hash[sum-1])
			{ 	max_len = i - (hash[sum-1]+1) +1;
				end_index = i;
				cout<<"new subarray spans : "<<end_index-max_len+1<<" to "<<end_index<<endl;
			}
		}
		else{
			hash[sum] = i;
			cout<<"value stored in hash "<<sum<<" : "<<hash[sum]<<endl;
		}

	}

	cout<<end_index-max_len+1 << "to"<<end_index<<endl;
	cout<<max_len<<endl;


	getch();
	return 0;
}
