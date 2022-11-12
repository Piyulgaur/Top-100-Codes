#include <iostream> 
using namespace std;

int main(){
    int num = 12321;
    int temp = num , rem , rev = 0;


    while(temp != 0 ){
        rem = temp%10;
        rev = rev * 10 + rem;
        temp = temp/10;  
    }

    if(num == rev)
    cout << "palindrome";
    else
    cout << "not palindrome";

    // Time Complexity : O(N)
    // Space Complexity : O(1)

}


// Method 2 - Recursion 

int getRev(int n, int rev){

    if(n == 0)
    return rev;

    int rem = n%10;
    rev = rev*10 + rem;

    return getRev(n/10, rev);
}

int main(){
    int n = 12345;
    int rev = 0;
    if(getRev(n , rev) == n)
    cout << "palindrome";
    else
    cout << "not palindrome";

    // Time Complexity : O(N)
    // Space Complexity : O(1)
}