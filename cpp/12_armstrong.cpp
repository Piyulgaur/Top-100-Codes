#include <iostream> 
#include <math.h>
using namespace std;

int order(int x){
    int len = 0;
    while( x != 0 ){
        len++;
        x = x/10;
    }
    return len;
}

int main(){
    int num = 370;
    int temp = num;
    int power = order(num);
    int sum = 0;
    int rem;
    while(temp!=0){
        rem = temp%10;
        sum = sum + pow( rem, power);
        temp = temp/10;
    }

    if( sum == num )
    cout << "armstrong number";
    else
    cout << "not armstrong number";
}