//passed all testcases on IB and 58/61 on leetcode 


#include <conio.h>
#include<bits/stdc++.h>

using namespace std;


int main(){
	
	vector<int> A = {1, 3, -1, -3, 5, 3, 6, 7};
	int B = 3;
	vector<int> maxss(0,A.size()-B+1);

	queue<int> q;


	int max1 = INT_MIN;
	for(int i=0; i<B && i<A.size();++i){
		q.push(A[i]);
		max1 = (max1 > A[i])? max1 : A[i] ;
	}
	maxss.push_back(max1);

	for(int i=B;i<A.size();++i){
		
		if(q.front() == max1 && A[i] >= max1){
			q.pop();
			q.push(A[i]);
			max1 = A[i];
		}
		else if(q.front() < max1 && A[i] <= max1){
			q.pop();
			q.push(A[i]);
		}

		else{
			q.pop();
			q.push(A[i]);
			for(int j = i-B+1;j<=i;++j){
				max1 = max(max1,A[j]);
			}
		}

		maxss.push_back(max1);		


	}

	for(int i=0 ;i <maxss.size();++i){
		cout<<maxss[i]<<" ";
	}

	getch();
	return 0;
}