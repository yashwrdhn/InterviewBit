// const int MAX= 1000 ;

// int A[MAX];
// int size ;
// int min_element = INT_MAX;

// MinStack::MinStack() {
    
//     ::size = 0;
//     void push(int x);
//     bool pop();
//     int top();
//     int getMin();
// }

// void MinStack::push(int x) {
    
//     if(::size == MAX){
//         return ;
//     }
//     min_element = min(min_element,x);
//     A[::size++] = x;
//     return 1;
// }

// bool MinStack::pop() {
    
//     if(::size == 0){
//         return 0;
//     }
//     ::size--;
//     return 1;
// }

// int MinStack::top() {

//     if(::size == 0) return -1;
//     else return A[::size-1];
// }

// int MinStack::getMin() {
    
//     if(::size == 0) return -1;

//     return min_element;
// }