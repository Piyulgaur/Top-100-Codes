#include <iostream>
using namespace std;

//Method 1 

int main(){
    int a = 0, b = 1;
    cout << a << " " << b << " ";

    int n = 5;  // series till n
    int c ;

    for(int i = 2; i < n; i++){
        c = a + b ;
        cout << c << " ";
        a = b;
        b = c;
    }

}

// Method 2 - recursion

int fib(int n){
    if(n <= 1)
        return n;

    return fib(n-1) + fib(n -2);
}

int main(){
    int n = 5;

    for(int i = 0; i < n; i++){
        cout << fib(i) << " ";
    }
}