#include <iostream>
using namespace std;


// Method 1 - brute force

int main(){
    int num = -15;

    if(num == 0){
        cout << "zero";
    }
    else if(num < 0){
        cout << "negative";
    }
    else{
        cout << "positive";
    }
}

// Method 2 - trenary operation
// ( Condition ) ? ( if True : Action) : ( if False : Action) ;

int main(){
    int num = -15;

    if(num == 0) cout << "zero";
    else (num < 0) ? cout << "negative" : cout << "positive";

}