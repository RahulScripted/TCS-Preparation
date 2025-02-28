// Check if the number is an abundant number or not




#include <bits/stdc++.h>
using namespace std;

bool checkAbundant(int num){
    int sum = 0;
    for (int i = 1; i <= sqrt(num); i++) {
		if (num % i == 0) {
			if (num / i == i) {
				sum += i;
			}
			else {
				sum += i;
				sum += num / i;
			}
		}
    }

    sum -= num;
    return sum > num;
}

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    if(checkAbundant(num)) cout<<num<<" is an abundant number";
    else cout<<num<<" is not an abundant number";
}