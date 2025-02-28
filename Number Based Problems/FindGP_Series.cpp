// Program to find Sum of GP Series




// Find Sum of AP Series



#include <bits/stdc++.h>
using namespace std;


int main(){
    float firstTerm,commonDiff,numberOfTerm;

    cout<<"Enter first term : ";
    cin>>firstTerm;

    cout<<"Enter common difference : ";
    cin>>commonDiff;

    cout<<"Enter the number of term : ";
    cin>>numberOfTerm;

    float sum = 0;
    for(int i = 1;i <= numberOfTerm; i++){
        sum += firstTerm;
        firstTerm *= commonDiff;
    }

    cout<<"Sum will be : "<<sum;
}