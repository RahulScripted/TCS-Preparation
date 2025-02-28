// Greatest of three numbers




#include <bits/stdc++.h>
using namespace std;

int main(){
    int first,second,third;

    cout<<"Enter the first number : ";
    cin>>first;

    cout<<"Enter the second number : ";
    cin>>second;

    cout<<"Enter the third number : ";
    cin>>third;

    if(first > second && first > third) cout<<first<<" is greater than "<<second<<" and "<<third;

    else if(second > first && second > third) cout<<second<<" is greater than "<<first<<" and "<<third;
    
    else cout<<third<<" is greater than "<<first<<" and "<<second;
}