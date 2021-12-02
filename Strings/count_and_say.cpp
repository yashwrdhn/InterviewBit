#include <conio.h>
#include<bits/stdc++.h>

using namespace std;


int main(){
	int A = 5;
	string s1 = "1";
    string s2;
    int i;
    int count = 1;
    
    while(A--){
        s2 = "";
        for(i=0; i < s1.length()-1; ++i){
            if(s1[i+1] == s1[i]){
                count += 1;
            }
            else{
               char c = '0'+count; 
               s2.push_back(c);
                s2.push_back(s1[i]);
                count = 1;
            }
        }
        char c = '0'+count;
        s2.push_back(c);
        s2.push_back(s1[s1.length()-1]);
        count = 1;
        s1 = s2;
        cout<<s2<<endl;
    }

    
	getch();
	return 0;
}