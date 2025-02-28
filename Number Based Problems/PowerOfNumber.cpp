// Power of a number



#include <bits/stdc++.h>
using namespace std;

int pow(int num, int power){
    int value = 1;
    while(power > 0){
        value *= num;
        power--;
    }
    return value;
}

int main(){
    int num, power;

    cout<<"Enter number : ";
    cin>>num;

    cout<<"Enter power : ";
    cin>>power;

    cout<<num<<" to the power of "<<power<<" will be : "<<pow(num,power);
}