#include <conio.h>
#include<bits/stdc++.h>

using namespace std;


int main(){
	
	vector<int>  A = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2} ;

	queue<int> q;

	int max = INT_MIN;
	int i = 0;
	int max_index;
	int sum1 = 0;

	if(A[i] == 0){
		cout<<i<<" "<<A[i]<<" block has volume but is not contained so moving on!!"<<endl;
		i++;
	}

	while( i< A.size()){

		if(A[i] >=  max ){

			while(!q.empty()){

				sum1 += max - q.front();
				cout<<" vol added :"<<max-q.front()<<endl;
				q.pop();
			}


			max  = A[i];
			max_index = i;
			cout<<"maximum found at i:"<<i<<" ie new_max:"<<A[i]<<endl;

		}
		else{
			q.push(A[i]);
			cout<<"pushing into q ; index:"<<i<<" value:"<<A[i]<<endl;
		}

		i++;
	}

	cout<<"searching from reverse now upto the max_index"<<endl ;

	i--;
	max = INT_MIN;


	while(!q.empty()){
		q.pop();
	}
	cout<<"emptied the queue"<<endl;

	while(i >= max_index){

		
		if(A[i] >=  max ){
			while(!q.empty()){
					sum1 += max - q.front();
					cout<<" vol added :"<<max-q.front()<<endl;
					q.pop();
				}

				max  = A[i];
				
				cout<<"maximum found at i:"<<i<<" ie new_max:"<<A[i]<<endl;

		}
		else{
			q.push(A[i]);
			cout<<"pushing into q ; index:"<<i<<" value:"<<A[i]<<endl;
		}

		--i;


	}	

	cout<<endl;
	cout<<sum1;

	getch();
	return 0;
		
}
