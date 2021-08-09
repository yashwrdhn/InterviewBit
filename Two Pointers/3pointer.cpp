#include <conio.h>
#include<bits/stdc++.h>

using namespace std;

int main(){

	vector<int> A = { 1, -4, 0, 0, 5, -5, 1, 0, -2, 4, -4, 1, -1, -4, 3, 4, -1, -1, -3 };
	sort(A.begin(),A.end());
	for(int k=0; k<A.size();++k){
		cout<<A[k]<<" ";
	}
	cout<<"\n";

	vector<vector<int>> triplets;

	int i,j,k;
	int count=0;

	for(int i=0; i<A.size(); ++i){

		if(A[i] == A[i-1] && i!= 0)continue;
		
		j = i+1;
		k = A.size()-1;

		while( j < k ){

			if(A[j]+A[k] == -1*A[i]){
				
				if( j  && A[j-1] != A[j] ){
				// cout<<( count && A[i] == triplets[count][0] && A[j] == triplets[count][1] && A[k] == triplets[count][2]);
				// {	
				// 	cout<<"nope";
				// 	continue;
				// }
				// count++;
				triplets.push_back({A[i],A[j],A[k]});

				}	
				// cout<<(triplets[count] == triplets[count+1]) ;
				// cout<<triplets.back()[0]<<triplets.back()[1]<<triplets.back()[2]<<"\n";
				j++;k--;
				
			}
			else if (A[j]+A[k] < -1*A[i]){
				j++;
			}
			else{
				k--;
			}

		}
		

	}

	for(int k=0; k<triplets.size();++k){
		cout<<triplets[k][0]<<" "<<triplets[k][1]<<" "<<triplets[k][2]<<"\n";
	}
	

	getch();
	return 0;
}