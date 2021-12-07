#include <conio.h>
#include<bits/stdc++.h>

using namespace std;


class LRUCache{
	list<pair<int,int>> dq;
	map<int , list<pair<int,int>>::iterator> mymap;
	int csize;


public:
	LRUCache(int n){
		csize = n;
	}

	int get(int key){
		auto found_itr = mymap.find(key);
		if(found_itr == mymap.end() ){
			return -1;
		}
		dq.splice(dq.begin(),dq,found_itr->second);
		return found_itr->second->second;	
	}


	void put(int key,int value){

		auto found_itr = mymap.find(key);
		if(found_itr != mymap.end() ){
			dq.splice(dq.begin(),dq,found_itr->second);
			found_itr->second->second = value;
			return ;
		}
		if(mymap.size() == csize){
			int key_to_del = dq.back().first;
			dq.pop_back();
			mymap.erase(key_to_del);
		}
		dq.emplace_front(key,value);
		mymap[key] = dq.begin();
	}


	void display();
};

void LRUCache::display(){
	auto itr = dq.begin();
	while(itr != dq.end()){
		cout<<itr->second++<<" ";
	}
	cout<<endl;
}

int main(){
	
	LRUCache ca(4);
 
    ca.put(1,1);
    ca.put(2,2);
    ca.put(3,3);
    cout<< ca.get(1)<<endl;
    ca.put(4,4);
    ca.put(5,5);
    ca.display();

	getch();
	return 0;
}