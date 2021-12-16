// https://leetcode.com/problems/triangle/

#include <conio.h>
#include<bits/stdc++.h>

using namespace std;


int main(){
	

	vector<vector<int>> triangles = {{2},{3,4},{6,5,7},{4,1,8,3}};
	vector<int> index;
	int n = triangles.size();
	int j = 0;

	index.push_back(0);
	int sum = triangles[0][0];

	for(int i=1; i<n; ++i){
		j = index.back();

		if(triangles[i][j] > triangles[i][j+1]){
			index.push_back(j+1);
			sum += triangles[i][j+1];
		}
		else{
			index.push_back(j);
			sum += triangles[i][j];
		}
	}
	cout<<sum<<endl;

	getch();
	return 0;
}