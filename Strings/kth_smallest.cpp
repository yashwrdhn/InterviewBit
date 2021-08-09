#include<conio.h>
#include<bits/stdc++.h>

using namespace	std;

int main(){

	vector<int> A = {2,3,1,1,1,0,4,5,6};
	int k = 3;
    map<int,int> mymap;
    int sum = 0;

    int freq = 0;

    for(int i=0; i<A.size();++i){
    	mymap[A[i]] += 1;
    }

    auto itr = mymap.begin();

    while(itr != mymap.end()){

    	freq = itr->second; 
    	
    	
    	 if(sum + freq < k){
    		sum += freq;
    		itr++;
    	}

    	{cout<<itr->first;break;}
    	
    }

	getch();
	return 0;
}