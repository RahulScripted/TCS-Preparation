// Write a program to determine if a given year is a leap year or not




#include<bits/stdc++.h>
using namespace std;


int main(){
    int year;
    cout<<"Enter the year : ";
    cin>>year;

    if(year % 4 == 0 && ((year % 400 == 0) || (year % 100 != 0))){
        cout<<year<<" is a leap-year";
    }
    else{
        cout<<year<<" is not a leap-year";
    }
}