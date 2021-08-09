#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

void swap(int *x,int *y);

class MinHeap{

	int *harr;
	int capacity;
	int heap_size;

	public:

		MinHeap(int capacity);
		void minHeapify(int);
		int parent(int i){
			return (i-1)/2;
		}

		int left(int i){ return 2*i + 1 ;}
		int right(int i){ return 2*i + 2 ;}

		int extractMin();

		void decreaseKey(int i,int new_val);
		
		int getMin(){ return harr[0]; }

		void deleteKey(int i);
		void insertKey(int k);

		void show();


};

void swap(int *x,int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

MinHeap::MinHeap(int cap){

	heap_size = 0;
	capacity = cap;
	harr = new int[cap];
}

void MinHeap::insertKey(int k){

	if(heap_size == capacity){
		cout<<"not possible to insert new element";
		return ;
	}

	heap_size++;
	int i = heap_size-1;
	harr[i] = k;

	while( i!= 0 && harr[parent(i)] > harr[i]){
		swap(&harr[parent(i)],&harr[i]);
		i = parent(i);
	}
}

void MinHeap::decreaseKey(int i,int new_val){
	
	harr[i] = new_val;
	//if new val is smaller 
	if(new_val <= harr[i]){

		while(i != 0 && harr[parent(i)] > harr[i]){
			swap(&harr[parent(i)],&harr[i]);
			i = parent(i);
		} 
	}
	// show();
}

int MinHeap::extractMin(){


	if(heap_size == 1){
		heap_size--;
		return harr[0];
	}

	int root = harr[0];
	harr[0] = harr[heap_size-1];
	heap_size--;
	minHeapify(0);
	return root;
}

void MinHeap::deleteKey(int i){

	decreaseKey(i,INT_MIN);
	extractMin();
}


void MinHeap::minHeapify(int i){

	int l = left(i);
	int r = right(i);
	int smallest = i;
	if(l < heap_size && harr[l] < harr[i])
		smallest = l;
	if(r < heap_size && harr[r] < harr[smallest])
		smallest = r;
	if(smallest != i){
		swap(&harr[i],&harr[smallest]);
		minHeapify(smallest);
	}

}

void MinHeap::show(){
	for(int i=0;i<heap_size;++i){
		cout<<harr[i]<<" ";
	}
	cout<<"\n";
}

int main(){

	MinHeap h(11);

	// h.show();
	h.insertKey(3);
	// h.show();

    h.insertKey(2);
    // h.show();
    
    h.deleteKey(1);
    // h.show();
    h.insertKey(15);
    h.insertKey(5);
    h.insertKey(4);
    h.insertKey(45);
    cout << h.extractMin() << " ";
    cout << h.getMin() << " ";
    h.decreaseKey(2, 1);
    cout << h.getMin();

	getch();
	return 0;
}