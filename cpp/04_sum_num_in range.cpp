#include <iostream>
using namespace std;

// methhod 1 - for loop 

int main(){
    int a = 5;
    int b = 10;
    int sum = 0;

    for(int i = a; i < b; i++){
        sum += i;
    }    

    cout << sum;
}

// method 2 - using formula 

// Sum = ( Num * ( Num + 1 ) ) / 2

int main(){
    int a = 5;
    int b = 10;

    int sum = (b*(b+1))/2 - (a*(a+1))/2; + a; 

    cout << sum;
}

// method 3 - recursion

int getSum(int a, int b){
        
    // stop when any recursion call tries to go over b (larger number)
    if(a > b)
    return 0;

    else
    return a + getSum(a+1, b);
}


int main(){
    int a = 5;
    int b = 10;

    int sum = getSum(a,b);

    cout << sum;
}