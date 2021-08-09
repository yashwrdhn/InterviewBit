#include<conio.h>
#include<bits/stdc++.h>

using namespace	std;

int main(){

	string A = "aaaaaaaaaabcccdd";
	int B = 2;
	int i=0;
    int j=1;

    while( i<j && j<A.length() ){

        if(A[i] == A[j]) { 
        	
        	 if(j-i == B){
                A.erase(A.begin()+i,A.begin()+j);   
                j--; 
            }

        	j++;
		}
        
        else{


            if(j-i == B && A[i] == A[j-1]){
                A.erase(A.begin()+i,A.begin()+j);  
                j = i+1;  
            }
            else{
            	i++;
            	j++;
            }

       
        }

        
    }

 if(j-i == B && A[i] == A[j-1]){
                A.erase(A.begin()+i,A.begin()+j); }
    cout<<A;
	getch();
	return 0;
}