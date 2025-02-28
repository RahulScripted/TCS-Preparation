// Find the median of the given array




#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {2,5,1,7};
    int sz = sizeof(arr) / sizeof(arr[0]);  
    sort(arr, arr + sz);

    if(sz % 2 == 0){
        int first = (sz / 2) - 1;
        int second = (sz / 2);
        cout<<"Median will be : "<<(double) (arr[first] + arr[second]) / 2;
    }
    else{
        cout<<"Median will be : "<<arr[sz / 2];
    }
}