#include <conio.h>
#include<bits/stdc++.h>

using namespace std;


int main(){
	
	vector<int> arr = {0,0,0,1,1,0,0,1};
	int b = 3;

	int n = arr.size();
	int k = 0;
	int count = 0;
	while(  k < n){

		if(arr[k+b-1] == 1){
			cout<<"turn the light on at X = "<<k+b-1<<endl;
			k += 2*b+1;
			count++;
		}

		else if(k >=0 && k > k-b+1) {
			k--;
		}
		else{
			cout<<-1<<endl;break;
		}

	}

	cout<<count<<endl;
	getch();
	return 0;
}