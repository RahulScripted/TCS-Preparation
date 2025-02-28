// Check if a number is a Strong Number or not




#include <bits/stdc++.h>
using namespace std;

int fact(int num){
    int power = 1;
    for(int i = num;i > 0;i--){
        power *= i;
    }

    return power;
}

bool checkStrong(int num){
    int sum = 0,n = num;
    while(n > 0){
        int digit = n % 10;
        sum += fact(digit);
        n /= 10;
    }

    if(sum == num) return true;
    else return false;
}

int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;

    if(checkStrong(num)) cout<<num<<" is a strong number";
    else cout<<num<<" is not a strong number";
}