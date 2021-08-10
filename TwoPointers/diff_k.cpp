#include<conio.h>
#include<bits/stdc++.h>

using namespace std;

int main(){

	//sorted array
	vector<int> A = {0,1,2,3,4};	
	int i=0,j=1,k=0;
	int found=0;

	while(i <= j && j<A.size()){

		if(A[j] - A[i] == k && i!=j){

			cout<<i<<" "<<j<<"\n";
			found=1;
			break;
			// return vector<int>{i,j};
		}
		else if( A[j]-A[i] <= k){
				j++;
			}
			else{
				i++;
			}
			
	}

	cout<<( (found) ? 1 : 0 );

	getch();
	return 0;
}