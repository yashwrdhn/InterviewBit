/*
Given an integer array A of size N. You need to count the number of special elements in the given array.
A element is special if removal of that element make the array balanced.
Array will be balanced if sum of even index element equal to sum of odd index element.

Example Input
Input 1:
 A = [2, 1, 6, 4]
Input 2:
 A = [5, 5, 2, 5, 8]

Example Output
Output 1:
 1
Output 2:
 2

Explanation 1:
 After deleting 1 from array : {2,6,4}
    (2+4) = (6)
 Hence 1 is the only special element, so count is 1
Explanation 2:
 If we delete A[0] or A[1] , array will be balanced
    (5+5) = (2+8)
 So A[0] and A[1] are special elements, so count is 2.
*/

#include <conio.h>
#include<bits/stdc++.h>

using namespace std;


int main(){
	
	vector<int> A = {2,1,6,4};

	vector<int> left_even(A.size(),0);
	vector<int> right_even(A.size(),0);
	vector<int> left_odd(A.size(),0);
	vector<int> right_odd(A.size(),0);


	int even = 0;
	int odd = 0;


	for(int i=0; i<A.size();++i){

		left_even[i] = even;
		left_odd[i] = odd;

		if(i%2 == 0){
			even += A[i];
			
		}
		else{
			odd += A[i];
		}
	}	

	even = odd = 0;

	for(int i=A.size()-1 ; i >= 0; --i){

		right_even[i] = even;
		right_odd[i] = odd;

		if(i%2 == 0){
			even += A[i];
			
		}
		else{
			odd += A[i];
			
		}
	}

	int count = 0;
	
	for(int i=0; i<A.size();++i){


		if(left_odd[i] + right_even[i] == left_even[i] + right_odd[i] ){
			count++;
			cout<<"yes";
		}
	}
	for(int i=0; i<A.size(); ++i){
		cout<<left_even[i]<<" ";
	}
	cout<<"\n";
	for(int i=0; i<A.size(); ++i){
		cout<<left_odd[i]<<" ";
	}
	cout<<"\n";
	for(int i=0; i<A.size(); ++i){
		cout<<right_even[i]<<" ";
	}
	cout<<"\n";
	for(int i=0; i<A.size(); ++i){
		cout<<right_odd[i]<<" ";
	}

	

	getch();
	return 0;
}