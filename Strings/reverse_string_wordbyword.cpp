#include<conio.h>
#include<bits/stdc++.h>

using namespace	std;

int main(){
	// string A  = "       fwbpudnbrozzifml osdt ulc jsx kxorifrhubk ouhsuhf sswz qfho dqmy sn myq igjgip iwfcqq                 ";
	string A = "aw";
	string word = "";
    int no_of_words = 0;
    string B;
    int i=0;


    while( i == ' ' & i<A.length());

    
    while( i < A.length()){
        if(A[i] != ' '){
            word +=  A[i];
        }
        

        else{
        	if(word.length()){
            if(no_of_words){
                B = word +' '+ B;}
            else{
                B = word;
            }    
            word = "";
            no_of_words++;
        }
    	}
        i++;
    }
    if(word.length()){
    	if(no_of_words){
                B = word +' '+ B;}
            else{
                B = word;
            }
    }
    	 
    

    cout<<"\n"<<B;

    cout<<A.length()<<" "<<B.length();

	getch();
	return 0;
}