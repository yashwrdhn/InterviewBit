#include <conio.h>
#include<bits/stdc++.h>

using namespace std;


int main(){
	
	int A = 823543 ;

	//there was some problem with double.check later.	

	for(int i=2; i*i <= A; ++i){

		float p = log2(A)/log2(i);

		cout<<ceil(p)<<" "<<floor(p)<<endl;
		if(floor(p) == ceil(p)){
			cout<<"found : x^y : x = "<<i<<" y:"<<p<<endl;
			
		}

		cout<<i<<" "<<p<<" "<<pow(i,p)<<endl;

	}
	cout<<"not found";

	getch();
	return 0;
}


//I iterated the base from i=2 to root(A) and checkd if  log(A)_base(i) is an integer.