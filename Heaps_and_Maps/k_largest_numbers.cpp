// incomplete


#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

void swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void heapify(vector<int> &A,int i){
    int l = 2*i+1;
    int r = 2*i+2;
    int smallest = i;
    if(l < A.size() && A[l] < A[i]){
        smallest = i;
    }
    if(r < A.size() && A[r] < A[smallest]){
        smallest = r;
    }

    if(smallest != i){
        swap(&A[i],&A[smallest]);
        
    }
    if(l < A.size())
        heapify(A,l);
    if(r < A.size())
        heapify(A,r);

}

int main(){

	vector<int> A = {5,4,3,2,1};
	int B = 3;
	make_heap(A.begin(),A.end());
    // heapify(A,0);

    // return A;
    for(int i=0;i<A.size();++i){
    	cout<<A[i]<<" ";
    }
    sort_heap(A.begin(),A.end());
    cout<<"\n";
    for(int i=0;i<A.size();++i){
    	cout<<A[i]<<" ";
    }
    vector<int> AB;
    AB.assign(A.begin()+A.size()-B,A.end());
    cout<<"\n";
    for(int i=0;i<AB.size();++i){
    	cout<<AB[i]<<" ";
    }
    
    getch();
    return 0;
}
