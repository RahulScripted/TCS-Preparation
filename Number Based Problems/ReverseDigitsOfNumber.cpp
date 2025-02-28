// Reverse digits of a number



#include <bits/stdc++.h>
using namespace std;

int reverse(int num){
    int sum = 0;
    while(num > 0){
        int digit = (num % 10);
        sum = digit + (sum * 10);
        num /= 10;
    }

    return sum;
}

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    cout<<"Reverse will be : "<<reverse(num);
}