#include <bits/stdc++.h>

using namespace std;

void dfs(vector<vector<int>> &edges, int sv, vector<int> &visited, int n){
    cout<<sv<<" ";
    visited[sv] = 1;
    for(int i = 0; i< n; ++i){
        if(edges[sv][i] == 1 && !visited[i]){
            dfs(edges, i, visited, n);
        }
    }
}

void topo(vector<vector<int>> &edges, int sv, vector<int> &visited, int n, stack<int> &v){
  
    visited[sv] = 1;
     for(int i = 0; i< n; ++i){
        if(edges[sv][i] == 1 && !visited[i]){
           topo(edges, i, visited, n, v);
        }
    }
    v.push(sv);
   
}

int main() {
    int n, e;
    n = 6;
    e = 6;
    
    vector<vector<int>> edges(n,vector<int>(n,0));
    
    int f,s;
    for(int i = 0; i< e; ++i){
        cin >> f >> s;
        edges[f][s] = 1;
    }
    
    // for(int i = 0; i< e; ++i){
    //     for(int j = 0; j < n; ++j){
    //         cout<< edges[i][j]<<" ";
    //     }
    //     cout<< endl;
    // }
    
    vector<int> visited(n,0);
    
    for(int i = 5; i >= 0; --i){
        if(!visited[i])  dfs(edges, i, visited, n);
       
    }
    cout<<endl;
    visited = vector<int>(n,0);
      stack<int> v;
    for(int i = 0; i < n; ++i){
        if(!visited[i])  topo(edges, i, visited, n, v);
       
    }
     while(!v.empty()){
        cout<< v.top()<<" ";
        v.pop();
      }
    return 0;
}