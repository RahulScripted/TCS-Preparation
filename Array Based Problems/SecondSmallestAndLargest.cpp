// Second Smallest and Second Largest element in an array




#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {3,6,12,7,4,1,8};

    int maxi = INT_MIN,secondMaxi = INT_MIN;
    int mini = INT_MAX,secondMini = INT_MAX;
    int sz = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0;i < sz;i++){
        if(maxi < arr[i]){
            secondMaxi = maxi;
            maxi = arr[i];
        }
        else if(secondMaxi < arr[i] && arr[i] != maxi){
            secondMaxi = arr[i];
        }

        if(mini > arr[i]){
            secondMini = mini;
            mini = arr[i];
        }
        else if(secondMini > arr[i] && arr[i] != mini){
            secondMini = arr[i];
        }
    }

    cout<<"Second maximum value will be : "<<secondMaxi<<endl;
    cout<<"Second minimum value will be : "<<secondMini<<endl;
}