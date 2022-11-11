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

