#include<bits/stdc++.h>
#include <conio.h>

using namespace std;

int check_subset(int arr1[],int n1,int arr2[],int n2){

	//set or unordered set would be better option
	map<int,int> mymap;
	for(int i=0;i<n1;++i){
		mymap[arr1[i]] += 1;
	}

	for(int j=0;j<n2;++j){

		if(mymap.count(arr2[j]) == 0){
			return 0;
		}
	}

	return 1;
}

int main(){

	int arr1[] = {1,2,3,4,5,6,7,8,9,0};
	int n1 = sizeof(arr1)/sizeof(int);

	int arr2[] = {3,5,6,19};
	int n2 = sizeof(arr2)/sizeof(int);

	cout<<check_subset(arr1,n1,arr2,n2);

	getch();
	return 0 ;
}