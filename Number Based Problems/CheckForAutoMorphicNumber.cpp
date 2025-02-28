// Check if a number is Automorphic Number





#include <bits/stdc++.h>
using namespace std;

bool autoMorphic(int num){
    int result = num * num;

    while(num > 0){
        if((num % 10) != (result % 10)) return false;
        num /= 10;
        result /= 10;
    }
}

int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;

    if(autoMorphic(num)) cout<<num<<" is an automorphic number";
    else cout<<num<<" is not an automorphic number";
}