#include <conio.h>
#include<bits/stdc++.h>

using namespace std;

// void show(map<char, pair<int,int>> hash){
// 	auto itr = hash.begin();
// 	while(itr != hash.end()){
// 		cout<<itr->first<<" : "<<itr->second.second<<endl;
// 		itr++;
// 	}
// }


// int main(){
	
// 	string s = "leetcodelet";

//     map<char,pair<int,int>> hash;
//     for(int i=0; i<s.length(); ++i){
//         char ch = s[i];
//         if(hash.find(ch) != hash.end()){
//             hash[ch].second += 1;
//         }
//         else{
//             hash[ch].first = i;
//             hash[ch].second = 1;
            
//         }
//     }
//     sort(hash.begin(),hash.end(),cmp);
//     show(hash);

// 	getch();
// 	return 0;
// }

class Solution {
public:
    int firstUniqChar(string s) {
        
        map<char,pair<int,int>> hash;
        for(int i=0; i<s.length(); ++i){
            char ch = s[i];
            if(hash.find(ch) != hash.end()){
                hash[ch].second += 1;
            }
            else{
                hash[ch].first = i;
                hash[ch].second = 1;
                
            }
        }
        for(int i=0; i<s.length(); ++i){
            char ch = s[i];
            if(hash[ch].second == 1){
                return hash[ch].first;
            }
        }
        return -1;
        
    }
};