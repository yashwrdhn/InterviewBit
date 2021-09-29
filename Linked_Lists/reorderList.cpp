// Given a singly linked list

//     L: L0 → L1 → … → Ln-1 → Ln,
// reorder it to:

//     L0 → Ln → L1 → Ln-1 → L2 → Ln-2 → …
// You must do this in-place without altering the nodes’ values.

// For example,

// Given {1,2,3,4}, reorder it to {1,4,2,3}.

//try better approach


#include <conio.h>
#include<bits/stdc++.h>

using namespace std;



struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
  };


void show(ListNode *node){

	ListNode *itr = node;

	while(itr != NULL){
		cout<<itr->val<<" ";
		itr = itr->next;
	}
	cout<<"\n";
}
 
ListNode* ListReverse(ListNode* A){

	
	// ListNode* prev = A;
	ListNode* itr = A->next;
	ListNode* prev = new ListNode(A->val);


	prev->next = NULL;

	while(itr != NULL){
		
		
		ListNode* newNode = new ListNode(itr->val);
		
		newNode->next = prev;
		prev = newNode;
		itr = itr->next;

	}

	return prev;
}

ListNode* reorder(ListNode* start,ListNode *end){

	ListNode* node = new ListNode(start->val);
	ListNode* head = node;
	start = start->next;

	// cout<<node->val<<" ";
	
	
	while(start->val !=  end->val  && start->val != end->next->val){

		// cout<<end->val<<endl;
		// cout<<start->val<<endl;

		node->next = new ListNode(end->val);
		node->next->next = new ListNode(start->val);
		

		node = node->next->next;
		// cout<<node->val<<" ";
		start = start->next;
		end = end->next;
		
		

	}

	if(start->val == end->val){
		node->next = new ListNode(end->val); }
	
	else{
		node->next = new ListNode(end->val);
		node->next->next = new ListNode(start->val);

	}


	return head;
}


int main(){
		

	ListNode* A = new ListNode(1);
	A->next = new ListNode(2);
	A->next->next = new ListNode(3);
	A->next->next->next = new ListNode(4);
	A->next->next->next->next = new ListNode(5);
	A->next->next->next->next->next = new ListNode(6);
	// A->next->next->next->next->next->next = new ListNode(7);

	show(A);

	ListNode* start = A; 
	ListNode* end  = ListReverse(A); 
	show(end);

	ListNode* newList = reorder(start,end);
	show(newList);

	getch();
	return 0;
}
