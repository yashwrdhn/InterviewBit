#include <conio.h>
#include<bits/stdc++.h>

using namespace std;



int main(){
	

	vector<int> arr;

	int n=5;
	int max = n;
	int min = 1;

	string s = "IIII";

	for(int i=0 ; i<s.length(); ++i){
		if(s[i] == 'D'){
			arr.push_back(max);
			max -= 1;		
		}
		else{
			arr.push_back(min);
			min += 1;
		}
	}

	//now min and max should be equal 
	arr.push_back(min);

	for(int i=0 ; i<arr.size(); ++i){
		cout<<arr[i]<<" ";
	}

	getch();
	return 0;
}