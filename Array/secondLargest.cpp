#include<bits/stdc++.h>
using namespace std;
int slargest(vector<int>& arr, int n){
    int largest = arr[0];
    int secondl = -1;
    for(int i = 1; i<n; i++){
        if(arr[i]>largest){
            secondl = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>secondl){
            secondl = arr[i];
        }
    }
    return secondl;
}
int sSmallest(vector<int>& arr, int n){
    int smallest = arr[0];
    int seconds = INT_MAX;
    for(int i = 1; i<n; i++){
        if(arr[i]<smallest){
            seconds = smallest;
            smallest = arr[i];
        }
        else if(arr[i] != smallest && arr[i]<seconds){
            seconds = arr[i];
        }
    }
    return seconds;
}
vector<int> getSecondOrderElements(int n, vector<int> a) {
    int secondLargest = slargest(a,n);
    int secondSmallest = sSmallest(a,n);
    return {secondLargest, secondSmallest};
}
