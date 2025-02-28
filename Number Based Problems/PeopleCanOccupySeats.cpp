// Permutations in which N people can occupy R seats




#include <bits/stdc++.h>
using namespace std;

int fact(int num){
    int power = 1;
    for(int i = num;i > 0;i--){
        power *= i;
    }

    return power;
}

int findPermutation(int numberOfPeople,int numberOfSeat){
    return fact(numberOfPeople) / fact(numberOfPeople - numberOfSeat);
}

int main(){
    int numberOfPeople,numberOfSeat;

    cout<<"Enter the number of people : ";
    cin>>numberOfPeople;

    cout<<"Enter the number of seats : ";
    cin>>numberOfSeat;

    cout<<"Permutation will be : "<<findPermutation(numberOfPeople,numberOfSeat);
}