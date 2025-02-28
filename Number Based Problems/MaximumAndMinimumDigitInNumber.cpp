// Maximum and Minimum digit in a number



#include <bits/stdc++.h>
using namespace std;

void maxiMin(int num){
    int maxi = INT_MIN, mini = INT_MAX;
    while(num > 0){
        int digit = (num % 10);
        if(digit > maxi) maxi = digit;
        if(digit < mini) mini = digit;
        num /= 10;
    }

    cout<<"Maximum number in digit : "<<maxi<<endl;
    cout<<"Minimum number in digit : "<<mini<<endl;
}

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    maxiMin(num);
}