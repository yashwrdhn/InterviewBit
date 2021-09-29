//not clear , try aagain

#include <conio.h>
#include<bits/stdc++.h>

using namespace std;


int gcd(int A,int B){
	
	if(B == 0)return A;
	return gcd(B,A%B);
}

int main(){
	

	int X,A,B;
	cin>>A>>B;

	while(gcd(A,B) != 1){
		A /= gcd(A,B);
	}
	cout<<A;
	getch();
	return 0;
}