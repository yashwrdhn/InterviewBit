#include<bits/stdc++.h>
#include <conio.h>
using namespace std;

int main(){

	vector<int> arr = {0,5,9,9,8,9,9,5};

	int l = arr.size();
	int j = l-1;
	int carry = 1;
	int temp;

	while(j >= 0){
		if(arr[j]+carry > 9){
			temp = arr[j];
			arr[j] = (temp+carry)%10;
			carry = (temp+carry)/10;
			--j;
		}
		else{
			arr[j] += carry;
			carry = 0;
			break;
		}

	}



	if(j < 0 && carry != 0){
		while(carry != 0){
			arr.insert(arr.begin(),carry%10);
			carry /= 10 ;
		}
	}

	while(arr.front() == 0){
		arr.erase(arr.begin());
	}

	for(int i=0 ; i<arr.size() ; ++i){
		cout<<arr[i]<<" ";
	}

	getch();
	return 0;
}