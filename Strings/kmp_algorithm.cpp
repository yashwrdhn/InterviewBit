#include <bits/stdc++.h>
using namespace std;

void naive(string s, string p){
 
    int i = 0,j = 0, k = 0;
    bool match = 0;
    
    
    for(i = 0; i < s.length(); ++i){
        k = i;
        while(s[k] == p[j] && j < p.length()){
            j++; k++;  
            if(j == p.length()){
                match = 1;
                j = 0;
                cout<<i<<endl;
                break;
            }
           
        } 
        if(match) match = 0;
        else{
            j = 0;
            i = k;
        }
    }
}


void kmp(string s, string p){
    
    map<char,int> pi;
    vector<int> table = {0};
    for( int i = 0 ; i < p.length(); ++i){
        if(pi.find(p[i]) == pi.end()){
            pi[ p[i] ] = i;
            table.push_back(0);
        }
        else{
            table.push_back( pi[ p[i]]+1);
        }
    }
    cout<<"table : "<<endl;
    cout<<" ";
    for(int i = 0 ; i < p.length(); ++i){
        cout<<p[i];
    }
    cout<<endl;
    for(int i = 0 ; i < table.size(); ++i){
        cout<<table[i];
    }
    
    cout<<endl;
    bool match = 0;
    int j = 0;
    for(int i = 0; i < s.length(); ++i){
        while(s[i] == p[j]){
            cout<<p[j];
            i++;
            j++;
            if(j == p.length()){
                match = 1;
                cout<<"\n match found !!!"<<endl;
                break;
            }
        }
        if(match){
            break;
        }
        else{
            j = table[j+1];
            cout<<" ";
        }
    }
    
}




int main() {
    
    string s = "ababcabcabababd";
    string p = "ababde";
    cout<< "given string : ";
    for(int i = 0 ; i < s.size(); ++i){
        cout<<s[i];
    }
    cout<<endl;
    cout<< "given pattern: ";
    for(int i = 0 ; i < p.size(); ++i){
        cout<<p[i];
    }
    cout<<endl;
    cout<<"using kmp algorithm : "<<endl;
    // naive(s,p);
    kmp(s,p);
    return 0;
}