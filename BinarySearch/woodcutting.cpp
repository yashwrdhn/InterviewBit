//code is complete but is not debugged and doesnt work as expected


#include<conio.h>
#include<bits/stdc++.h>
using namespace std;



int find_length(vector<int> A,int len){

    int start = 0;
    int end = A.size()-1;
    int mid;
    int min_tree_index;

    while(start<=end){
        mid = (start+end)/2;
        if(A[mid] == len) {min_tree_index = mid+1;break;}
        
        if(start == end){
            if(A[mid] < len){ min_tree_index = mid+1;}
            else{ min_tree_index = mid;}
        }
        else if(A[mid] < len){ start = mid+1; }
        else {end = mid-1;}
    }
    if(A[mid] < len){ min_tree_index = mid+1;}
            else{ min_tree_index = mid;}

    int sum = 0;
    for(int i=min_tree_index;i<A.size();++i){
        sum += A[i]-len;
    }
    return sum;
}

int main(){

    vector<int>A = {117, 84, 50, 119, 74, 128};
    int B = 58;

    sort(A.begin(),A.end());

    int start = 1;
    int end = A.back();
    int mid ;
    int found_len;
    int min=INT_MAX;

    while(start <= end){

        mid = (start+end)/2 ;

        found_len = 100; 
        // find_length(A,mid);

        if( found_len ==  B){
            cout<<"matched exavctly: "<<mid;
            // return mid;
            break;

        }

        else if(found_len > B){
            start = mid+1;
            min = (min > found_len) ?found_len:min;
        }
        else{
            end = mid-1;
        }
        

    }

    // cout<<min;

    getch();
    return 0;

}
