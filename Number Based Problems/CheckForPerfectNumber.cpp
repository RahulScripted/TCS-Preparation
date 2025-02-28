// Identify a number is a perfect number or not



#include<bits/stdc++.h>
using namespace std;

bool checkPerfect(int num){
    int sum = 0;
    if(num == 1) return 0;
    for(int i = 1;i < num;i++){
        if(num % i == 0) sum += i;
    }

    if(sum == num) return true;
    else return false;
}

int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;

    if(checkPerfect(num)) cout<<num<<" is a perfect number";
    else cout<<num<<" is not a perfect number";
}