#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main(){

	vector<int> A = {1,2,2,2,3,3,4,5,5,5,6,7};
	int k = 5;

	int max1,min,mid,lt,et,gt,res;

	min = *min_element(A.begin(),A.end());
	max1 = *max_element(A.begin(),A.end());

	

	while(min <= max1){

		mid = min + (max1-min)/2 ;

		gt = 0;
		lt = 0;
		et = 0;

		for(int i=0;i<A.size();++i){
			if(A[i] == mid) et++;
			else if(A[i] < mid) lt++;
			else gt++;
		}

		if(lt < k){

			if(lt+et >= k){

				min = mid;
				break;
			}


			min = mid+1;
		}
		else{
			max1 = mid-1;
		}


	}

	res = 0;
	for(int i=0; i<A.size();++i){
		if(A[i] <= min){
			res = max(res,A[i]);
		}
	}
	
	cout<<res;
	
	getch();
	return 0;
}