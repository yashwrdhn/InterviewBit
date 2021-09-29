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

ListNode* ListReverse(ListNode* node){

	ListNode *temp = node->next;
	node->next = NULL;
	ListNode* prev,*current;
	prev = node;

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

void ListSeparate(ListNode* A){

	ListNode* odd = A;
	ListNode* even = A->next;

	while( even != NULL && even->next != NULL){
		odd->next = even->next;
		odd = odd->next;
		even->next = odd->next;
		even = even->next;
	}
	

	odd->next = NULL;
}

void ListJoin(ListNode* odd,ListNode* even){
	ListNode* temp = even->next;

	while(temp != NULL ){
		temp = even->next;
		even->next = odd->next;
		odd->next = even;

		odd = even->next;
		even = temp;
	}
}
int main(){
	
	
	ListNode *A = new ListNode(1);
	A->next = new ListNode(2);
	A->next->next = new ListNode(3);
	A->next->next->next = new ListNode(4);
	A->next->next->next->next = new ListNode(5);
	
	ListNode *C = new ListNode(6);
	C->next = new ListNode(7);
	C->next->next = new ListNode(8);
	C->next->next->next = new ListNode(9);
	C->next->next->next->next = new ListNode(10);
	A->next->next->next->next->next = C;
	
	ListNode* B = A->next;

	cout<<"complete List  :";
	ListShow(A);
	
	

	ListSeparate(A);
	

	cout<<"odd list : ";
	ListShow(A);
	
	cout<<"even List : ";
	ListShow(B);

	B = ListReverse(B);

	cout<<"reverse B : ";
	ListShow(B);

	ListJoin(A,B);

	cout<<"even reverse list";
	ListShow(A);

	getch();
	return 0;
}