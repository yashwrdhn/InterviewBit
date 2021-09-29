// You are given two linked lists representing two non-negative numbers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

// Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)

// Output: 7 -> 0 -> 8

//     342 + 465 = 807
// Make sure there are no trailing zeros in the output list

// So, 7 -> 0 -> 8 -> 0 is not a valid response even though the value is still 807.


#include <conio.h>
#include<bits/stdc++.h>

using namespace std;

void show(list<int> mylist){

    list<int>::iterator itr = mylist.begin();
    

    while(itr != mylist.end()){

        cout<<*itr++<<" ";

    }
    cout<<"\n";

}

int main(){
    
    //nodes represent digits in reverse order
    list<int> A = {1,7,4};
    list<int> B = {7,8,5,9,0,0};
    list<int> C;

    int carry = 0;
    int sum = 0;

    list<int>::iterator itr1 = A.begin();
    list<int>::iterator itr2 = B.begin();

    while(itr1 != A.end() && itr2 != B.end()){

        //storing the sum in 1st list
        sum = (*itr1 + *itr2 + carry)%10 ;
        carry = (*itr1 + *itr2 + carry)/10;

        if(sum == 0 && carry == 0) break;

        C.push_back(sum);

        itr1++;
        itr2++;

    }

    while(itr1 != A.end()){
        sum = (*itr1 + carry)%10;
        carry = (*itr1 + carry)/10;

        if(sum == 0 && carry == 0) break;
        C.push_back(sum);
        itr1++;
    }

    while(itr2 != B.end()){
        sum = (*itr2 + carry)%10;
        carry = (*itr2 + carry)/10;

        if(sum == 0 && carry == 0) break;
        C.push_back(sum);
        itr2++;
    }

    if(carry){
        C.push_back(carry);
    }
    // reverse(C.begin(),C.end());
    show(C);


    getch();
    return 0;
}


// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    
//     if(A == NULL) return B;
//     if(B == NULL) return A;


//     int carry = 0;
//     int sum = 0;

//     ListNode* C = NULL,*head;

//     // list<int>::iterator itr1 = A.begin();
//     // list<int>::iterator itr2 = B.begin();

//     while(A != NULL && B != NULL){

//         //storing the sum in 1st list
//         sum = (A->val + B->val + carry)%10 ;
//         carry = (A->val + B->val + carry)/10;

//         // if(sum == 0 && carry == 0) break;
//         ListNode* temp = new ListNode(sum);
//         if(C == NULL){
//             C = temp;
//             head = C;
//         }
//         else{
//             C->next = temp;
//             C = C->next;
//         }
//         A = A->next;
//         B = B->next;

//     }

//     while(A){
//         sum = (A->val + carry)%10;
//         carry = (A->val + carry)/10;

//         // if(sum == 0 && carry == 0) break;
//         ListNode* temp = new ListNode(sum);
        
//         C->next = temp;
//         C = C->next;
//         A = A->next;
//     }

//     while(B){
//         sum = (B->val + carry)%10;
//         carry = (B->val + carry)/10;

//         // if(sum == 0 && carry == 0) break;
//         ListNode* temp = new ListNode(sum);
        
//         C->next = temp;
//         C = C->next;
//         B = B->next;
//     }

//     if(carry){

//         ListNode* temp = new ListNode(carry);
//         C->next = temp;
//         C = C->next;
//     } 

//     return head;

// }
