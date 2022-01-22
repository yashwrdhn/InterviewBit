int Solution::solve(vector<int> &nums, int b) {

    priority_queue<int> pq(nums.begin(),nums.end());

    int profit = 0;
    int x = 0;
    while(b--){
        x = pq.top();
        profit += x;
        pq.pop();
        pq.push(x-1);

    }

    return profit;

}
