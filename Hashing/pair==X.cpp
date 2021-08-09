#include<bits/stdc++.h>
#include <conio.h>

using namespace std;

int main(){

	int arr[] = {1,2,-4,5,-3,6,9,0};
	int n = 8;
	int X = 6;
	int temp;
	unordered_set<int> hash;

	for(int i=0;i<n;++i){

		temp = X-arr[i];

		if(hash.find(temp) !=  hash.end()){
			cout<<arr[i]<<" "<<temp;
			cout<<"\n";
		}

		hash.insert(arr[i]);
	}

	getch();
	return 0;
}