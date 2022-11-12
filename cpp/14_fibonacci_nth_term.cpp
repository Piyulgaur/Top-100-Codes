#include <iostream> 
using namespace std;


// Method 1 - 

int fib(int n){
    if(n <= 1)
        return n;

    return fib(n-1) + fib(n -2);
}

int main(){
    int n = 5;
        cout << fib(n - 1) ;
}


//Method 2 - space optimization 

// call fib series function and return last number (b)