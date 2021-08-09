#include <bits/stdc++.h>
#include<conio.h>

using namespace std;

int main() {

	int arr[] = {-6,-2,0,2,3,4,5,9};
	
	int arr2[] = {0,0,0,0,0,0,0,0};
	int i,j,k;	int pos=0;

	//find 1st positive no
	for(i=0; i<8;++i){
		if(arr[i] >= 0) {
			pos=i;
			break;}
	}

	//square the array
	for(i=0; i<8; ++i){ arr[i] = arr[i]*arr[i] ;}

	//if poc =0  array alreay sorted	
	if(pos){
		i = pos-1;
		j = pos;
		k = 0;
		while( i >=0 && j <8){

			if(arr[i] > arr[j]){
				arr2[k] = arr[j];
				j++;k++;
			}
			else{
				arr2[k] = arr[i];
				i--;k++;
			}
		}

		while(i >= 0){
			arr2[k++] = arr[i--];
		}
		while(j < 8){
			arr2[k++] = arr[j++];
		}
		//print arr2
		for(k=0; k<8;++k){
			cout<<arr2[k]<<" ";
		}
	}
	else{
		//print arr
		for(k=0; k<8;++k){
			cout<<arr[k]<<" ";
		}
	}

	getch();

	return 0;
}
