#include <iostream>
using namespace std;


// Method 1 - brute force

int main(){
    int num = 15;

    if(num%2 == 0)
    cout << "even";
    else
    cout << "odd";
}

// Method 2 - using bitwise operator


bool isEven(int number)            // Returns true if n is even, else odd
{     
    return (!(number & 1));        // n & 1 is 1, then odd, else even
}
 
int main()
{
    int number;
    
    cout << "Enter the number: "; cin >> number;

    if(isEven(number))
        cout << "Even";
    else
        cout << "Odd";

    //below can also be used instead of if else conditions
    //isEven(number)? cout << "Even" : cout << "Odd";
 
    return 0;
}