#include <conio.h>
#include<bits/stdc++.h>

using namespace std;


int main(){
	
	string s = "25487";

	int swaps = 3;
	char max = 0;
	int k = 0;
	


	while(k < swaps){

		max = k;
		for( int i = k; i < s.length(); ++i ){
			if(s[i] > s[max]){
				max = i;
			}
		}

		if(max != k){
			char temp = s[k];
			s[k] = s[max];
			s[max] = temp;
			
		}
		k++;
	}

	cout<<s<<endl;

	getch();
	return 0;
}