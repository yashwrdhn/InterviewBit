#include <conio.h>
#include<bits/stdc++.h>

using namespace std;


int main(){
	
	vector<int> A = {18468, 6335, 26501, 19170, 15725, 11479, 29359, 26963, 24465, 5706, 28146, 23282, 16828, 9962, 492, 2996, 11943, 4828, 5437, 32392, 14605, 3903, 154, 293, 12383, 17422, 18717, 19719, 19896, 5448, 21727, 14772, 11539, 1870, 19913, 25668, 26300, 17036, 9895, 28704, 23812, 31323, 30334, 17674, 4665, 15142, 7712, 28254, 6869, 25548, 27645, 32663, 32758, 20038, 12860, 8724, 9742, 27530, 779, 12317, 3036
	};

	vector<int> B = A;

	int n = A.size();

	// count of elements in final exp of XOR
	for(int i=0; i<n; ++i){
		// if(i == 0 || i == n-1){
		// 	B[i] = n;
		// }

		B[i] = (i+1)*(n-i);
	}

	int final_ans=0;
	for(int i=0 ; i<n;++i){

		cout<<B[i]<<" ";
		if(B[i]%2 == 0){
			continue;

		}

		final_ans ^= A[i];
	}

	

	cout<<final_ans;

	getch();
	return 0;
}