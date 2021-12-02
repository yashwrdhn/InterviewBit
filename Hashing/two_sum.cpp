vector<int> Solution::twoSum(const vector<int> &A, int B) {

    map<int,int> nos;

    for(int i=0; i<A.size();++i){

        if(nos.find(B-A[i]) == nos.end()){
            nos.insert(pair<int,int>(A[i],i));
        }
        else{
            return {nos[B-A[i]]+1,i+1};
        }
    }
    return {};
}
