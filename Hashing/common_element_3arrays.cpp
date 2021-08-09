//find elements common in atleast 2 arrays

vector<int> Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {

    
    map<int,int> freq;
    vector<int> v1;

    for(int i=0;i<A.size();++i){
        if(freq.count(A[i]) == 0) {
            freq[A[i]] = 1;
        }
    }

    for(int i=0;i<B.size();++i){
        
        if(freq.count(B[i]) < 2) {
          freq[B[i]] += 1; }
    }

    for(int i=0;i<C.size();++i){
        if(freq.count(C[i]) < 3) {
        freq[C[i]] += 1;}
    }

    for(auto itr = freq.begin() ; itr != freq.end() ;++itr){
        if(itr->second >= 2){
            v1.push_back(itr->first);
        }
    }
        
    return v1;
}
