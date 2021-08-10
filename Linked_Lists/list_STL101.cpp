#include<conio.h>
#include<bits/stdc++.h>

using namespace std;

void show(list<int> mylist){

	list<int>::iterator itr = mylist.begin();
	

	while(itr != mylist.end()){

		cout<<*itr++<<" ";

	}
	cout<<"\n";

}

int main(){


	list<int> l1 = {2,3,4,5};

	show(l1);

	l1.push_back(5);
	l1.push_front(8);

	
	show(l1);

	
	// l1.sort();
	show(l1);

	getch();
	return 0;
}