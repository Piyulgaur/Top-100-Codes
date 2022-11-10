#include <iostream>
using namespace std;

// Method 1 

int main(){
    int num = 235;
    int reverse = 0, rem;

    while(num != 0 ){
        rem = num%10;
        reverse = reverse*10 + rem;
        num = num/10;
    } 

    cout << reverse;

    // Time complexity : O(N)
    // Space complexity : O(1)

}

//Method 2 - Recursion

int Reverse(int num, int rev){
    
    if(num == 0)
        return rev;

    int rem = num%10;
    rev = rev*10 + rem;

    return Reverse(num/10, rev);
}

int main ()
{
    int num = 12345;

    cout << Reverse(num, 0);
 
    return 0;

    // Auxiliary Space complexity : O(N) due to function call stack
}