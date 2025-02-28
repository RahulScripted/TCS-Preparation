// Check if a number is not prime number



#include<bits/stdc++.h>
using namespace std;


int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;

    bool flag = true;
    if(num == 0 || num == 1) cout<<num<<" is not prime number";
    for(int i = 2;i * i <= num;i++){
        if(num % i == 0){
            flag = false;
            break;
        }
    }

    if(flag) cout<<num<<" is a prime number";
    else cout<<num<<" is not prime number";
}