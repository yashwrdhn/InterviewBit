#include <conio.h>
#include<bits/stdc++.h>

using namespace std;


int main(){

	int nums[] = {2,7,6,8,11,21};
	int target = 17;
	
	unordered_map<int,int> myset;
        int n = 6;
        
        for(int i=0 ; i<n; ++i){
            
            if(myset.find( target - nums[i]) != myset.end()){
                cout<<myset[target-nums[i]]<<" "<<i<<endl;
            }
            else{
                myset.insert(pair<int,int>(nums[i],i));
            }
        }
	getch();
	return 0;
}