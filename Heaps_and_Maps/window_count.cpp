#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

void show(map<int,int> mymap){

	auto itr = mymap.begin();
	while(itr != mymap.end()){
		cout<<itr->first<<":"<<itr->second<<"\n";
		itr++;
	}
	cout<<"\n";
}

int main(){

	vector<int> A = {1,2,1,3,4,3};
	int B = 3;

	vector<int> count;
    map<int,int> nos;
    int i=0;
    int j=0;

    for(j=0;j<B;++j){
        nos[A[j]] += 1;
    }
    count.push_back(nos.size()); 
    cout<<nos.size()<<"\n";
     show(nos);
    while( i<j && j < A.size()){

        if(nos[A[i]] == 1){
            
            nos.erase(A[i]);
        }
        else { nos[A[i]] -= 1; }
        
        i++;
        nos[A[j]] += 1;
        count.push_back(nos.size());
        j++;
        cout<<nos.size()<<"\n";
        show(nos);
        cout<<"\n";
         
    }

    // cout<<count;

	getch();

	return 0;
}