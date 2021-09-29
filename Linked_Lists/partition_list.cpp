#include <conio.h>
#include<bits/stdc++.h>

using namespace std;

//implementation was good but unnecessary. u partition nodes less x on left and nodes greadter then y on right and nodes with values equal to x are together in between.
//they didnt ask this. reread the ques.  https://www.interviewbit.com/problems/partition-list/
 
 struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };


void show(ListNode *node){

	while(node != NULL){
		cout<<node->val<<" ";
		node = node->next;
	}
	cout<<endl;
}

// int main(){
	
// 	ListNode *A = new ListNode(1);
// 	A->next = new ListNode(2);
// 	A->next->next = new ListNode(3);
// 	A->next->next->next = new ListNode(4);
// 	A->next->next->next->next = new ListNode(5);
// 	// A->next->next->next->next->next = new ListNode(2);
// 	show(A);
// 	int B = 5;

// 	ListNode *low,*mid,*high,*itr,*temp;
// 	low = mid = high = temp = NULL;
	
// 	itr = A;

// 	while(itr != NULL){

		

// 		if(itr->val < B){
			
// 			if(low == NULL){
// 				low = itr;
// 				itr = itr->next; 	
// 			}
// 			else{
// 				temp = low->next;
// 				low->next = itr;
// 				itr = itr->next;
				
// 				low = low->next;
// 				low->next = temp;
// 			}
			
// 			cout<<"low "<<low->val<<endl;
// 		}
// 		else if(itr->val == B){
// 			// cout<<"anything ?"<<endl;
// 			if(mid == NULL){
// 				mid = itr;
// 				itr = itr->next;

// 				mid->next = NULL;
// 				if(high != NULL){
// 					mid->next = low->next;
// 				}
// 				if(low != NULL){
// 					low->next = mid;
// 				}

				
// 			cout<<"equal "<<mid->val<<endl;
// 			}
// 			else{
// 				temp = mid->next;
// 				mid->next = itr;
// 				itr = itr->next;
// 				mid = mid->next;
// 				mid->next = temp;
// 			}
			 
// 		}
// 		else{
			
// 			if(high == NULL){
// 				high = itr;
// 				itr = itr->next;
// 				high->next = NULL;

// 				if(mid != NULL){
// 					mid->next = high;
// 				}
// 				else if(low != NULL){
// 					low->next = high;
// 				}
				
				
// 			}
// 			else{
// 				high->next = itr;
// 				high = high->next;
// 				itr = itr->next;
// 				high->next = NULL;
// 			}
			
// 			cout<<"high "<<high->val<<endl;
// 		}
		
		
// 	}

// 	// cout<<"aavegio"<<endl;

	

// 	// if(mid != NULL){
// 	// 	low->next = mid;
// 	// 	mid->next = high;
// 	// 	high->next = NULL;
// 	// }
// 	// else{
// 	// 	low->next = high;
// 	// 	high->next = NULL;
// 	// }


// 	show(A);

// 	getch();
// 	return 0;
// }























