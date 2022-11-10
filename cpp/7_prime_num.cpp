#include <iostream>
using namespace std;

// Method 1 - for loop 

bool isPrime(int n){
    if(n == 0 || n == 1)
    return false;
    
    for(int i = 2; i<n; i++){        // i < n/2                 // i < sqrt(n) 
        if(n%i == 0)
        return false;
    }

    return true;
}

int main(){
    int n = 113;

    if(isPrime(n)) cout << "prime number";
    else cout << "not a prime number";

    // Time Complexity : O(N)
    // Space Complexity : O(1)  

}


// Method 2 - recursion 

bool isPrime(int n, int i){

    if(n < 2 ) return false;

    if(n == i) return true;

    if(n%i == 0) return false;

    i += 1;

    return isPrime(n,i);
 
    // Time Complexity : O(N)
    // Space Complexity : O(1)
    
}