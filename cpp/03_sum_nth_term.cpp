#include <iostream>
using namespace std;

// method 1 - for loop 

int main(){
    int n = 10;
    int sum = 0;

    for(int i = 1; i <= n; i++){
        sum += i;
    }

    cout << sum;
}

// method 2 - using sum formula 

// Formula to Find the Sum of N terms
// Sum = ( Num * ( Num + 1 ) ) / 2

int main(){
    int n = 10;

    int sum = (n*(n+1))/2;

    cout << sum ;
}

// method 3 - recursion

int getSum(int n ){
    if(n==0) return n;
    else return n + getSum(n-1);
}

int main(){
    int n = 10;

    int sum = getSum(n);

    cout << sum;
}