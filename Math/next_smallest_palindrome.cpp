//incomplte

#include <conio.h>
#include<bits/stdc++.h>

using namespace std;


int main(){
	
	string A = "2345678";
	//req ans is 2346432



    int l =  A.length()-1;
    //to check if its already a palindrome
    string rev_A = A;
    string palin = "";
    reverse(rev_A.begin(),rev_A.end());

    
    if(rev_A == A) {
        A = to_string(stoi(rev_A) + 1);
        l = A.length()-1;
        
        if(A.length() <= 2 && A.length() == rev_A.length()) { A[0] = A[l]; } 
        
    }


    
    for(int i=0, j=l; i <= l/2 ; ++i, --j){
        A[j] = A[i];
    }

    if(A <= rev_A){
        if(A.length()%2 != 0 && A.length() != 1) { A[l/2] += 1; }
        else{
        	A[l/2] += 1;
        	A[l/2 -1 ] += 1; 
        }
    }
   cout<<A;


	getch();
	return 0;
}
