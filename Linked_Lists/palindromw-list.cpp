#include <conio.h>
#include<bits/stdc++.h>

using namespace std;


struct ListNode{
	int val;
	ListNode* next;

	ListNode(int x){
		this->val = x;
		this->next = NULL;
	}
};

void ListShow(ListNode* node){

	while(node != NULL){
		cout<<node->val<<" ";
		node = node->next;
	}
	cout<<endl;
}

int ListLength(ListNode* node){
	
	int length = 0;
	while(node != NULL){
		length++;
		node = node->next;
	}
	return length;
}

ListNode* ListReverse(ListNode* node,int x){

	int i = 1;
	while(i != x){
		++i;
		node = node->next;
	}

	cout<<"found mid "<<i<<endl;

	ListNode *temp = node->next;
	node->next = NULL;
	ListNode* prev,*current;
	prev = temp;
	temp = temp->next;

	current = temp;
	temp = temp->next;
	current->next = prev;
	prev->next = NULL;

	while(temp != NULL){
		current->next = prev;
		prev = current;
		current = temp;
		temp = temp->next;
	}
	current->next = prev;

	return current;
}

int ListPalin(ListNode*A , ListNode* B){

	while(A != NULL && B != NULL && A->val == B->val){
		cout<<A->val<<" ";
		A = A->next;
		B = B->next;
	}
	if(A != NULL && B != NULL){
		return 0;
	}
	else{
		return 1;
	}
}

int main(){
	
	
	ListNode *A = new ListNode(45);
	A->next = new ListNode(50);
	A->next->next = new ListNode(45);
	A->next->next->next = new ListNode(28);
	A->next->next->next->next = new ListNode(43);
	
	ListNode *C = new ListNode(7);
	C->next = new ListNode(21);
	C->next->next = new ListNode(45);
	C->next->next->next = new ListNode(50);
	C->next->next->next->next = new ListNode(45);
	// C->next->next->next->next->next = new ListNode(3);
	A->next->next->next->next->next = C;
	
	
	int len = ListLength(A);

	cout<<"length : "<<len<<endl;

	ListNode* B ;


	if(len <= 1) return 1;
	else if(len == 2){
			if(A->val == A->next->val){
				return 1;
			}
			else return 0;
	}
	else if(len == 3){
			if(A->val == A->next->next->val){
				return 1;
			}
			else return 0;
	}
	else if(len%2 == 0){	
		B = ListReverse(A, len/2 );
		
	}
	else{
		B = ListReverse(A, (len+1)/2);

	}
	ListShow(A);
	ListShow(B);
	cout<<ListPalin(A,B);

	getch();
	return 0;
}