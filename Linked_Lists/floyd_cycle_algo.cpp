//incomplete

#include <conio.h>
#include<bits/stdc++.h>

using namespace std;

// fast and slow pointer meeting point



struct Node{
	int val;
	Node *next;

	Node(int x){
		this->val = x;
		this->next = NULL;
	}
};

int main(){
	
	Node *head = new Node(1);
	head->next = new Node(2);
	head->next->next = new Node(3);
	head->next->next->next = new Node(4);

	cout<<head->next->val;

	getch();
	return 0;
}