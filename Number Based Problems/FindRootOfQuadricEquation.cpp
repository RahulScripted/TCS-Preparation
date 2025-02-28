// Program to Find Roots of a quadratic equation




#include <bits/stdc++.h>
using namespace std;

void findRoot(int a, int b, int c){
    int d = (b * b) - (4 * a * c);
    double sqrtValue = sqrt(abs(d));

    double firstRoot =  (double)(-b + sqrtValue) / (2 * a);
    double secondRoot =  (double)(-b - sqrtValue) / (2 * a);

    cout<<"Root will be : ("<<firstRoot<<" , "<<secondRoot<<")";
}

int main(){
    int a,b,c;

    cout<<"Enter the value of a : ";
    cin>>a;

    cout<<"Enter the value of b : ";
    cin>>b;

    cout<<"Enter the value of c : ";
    cin>>c;

    findRoot(a,b,c);
}