#include <iostream>
using namespace std;

// Method 1 

int main(){
    int num = 235;
    int sum = 0;

    while(num != 0 ){
        sum += (num%10);
        num = num/10;
    } 

    cout << sum;

    // Time complexity : O(N)
    // Space complexity : O(1)
}

//Method 2 - Recursion


int getSum(int num){
    
    if(num == 0)
        return 0;

    return (num % 10) + getSum(num/10);
}

int main ()
{
    int num = 12345;

    cout << getSum(num);
 
    return 0;

    // Auxiliary Space complexity : O(N) due to function call stack
}