// Replace all the 0’s with 1 in a given integer




#include <bits/stdc++.h>
using namespace std;

int replacewith1(int num){
    int power = 1, sum = 0, n = num;

    while(n > 0){
        int digit = (n % 10);
        if(digit == 0) digit = 1;
        sum = power * digit + sum;
        power *= 10;
        n /= 10;
    }

    return sum;
}

int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;

    cout<<"After replacing 0 from "<<num<<" it will be : "<<replacewith1(num);
}