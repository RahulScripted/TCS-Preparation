// Check if the given number is Harshad(Or Niven) Number




#include <bits/stdc++.h>
using namespace std;

bool checkHarshad(int num){
    int sum = 0, n = num;
    while(n > 0){
        int digit = (n % 10);
        sum += digit;
        n /= 10;
    }

    if(num % sum == 0) return true;
    else return false;
}

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    if(checkHarshad(num)) cout<<num<<" is a harshad number";
    else cout<<num<<" is not a harshad number";
}