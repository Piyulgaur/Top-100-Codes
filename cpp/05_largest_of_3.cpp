#include <iostream>
using namespace std;

// method 1 - if else

int main ()
{
    int first, second, third;
    first=10,second=20,third=30;
    
    if ((first >= second) && (first >= third))
        cout << first << " is the greatest "; 

    else if ((second >= first) && (second >= third))
        cout << second << " is the greatest";
    
    else
        cout << third << " is the greatest";
 
    return 0;
}

// method 2 - ternary operator

int main ()
{
    int first, second, third;
    first=10,second=20,third=30;
    
    int temp, result;

    temp = first > second ? first:second;
    
    result = temp > third ? temp:third;
    
    cout << result << " is the largest";

    return 0;
}

// method 3 - inbuilt max()

// use { include <math.h> }

int main ()
{
    int first, second, third;
    first=10,second=20,third=30;
    
    int result;

    result =  max(first,max(second, third));
    
    cout << result << " is the largest";

 
    return 0;
}