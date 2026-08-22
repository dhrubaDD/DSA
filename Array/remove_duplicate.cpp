#include<bits/stdc++.h>
using namespace std;
// A sorted array is given; Remove the duplicate elements and create an array with only single number...

int removeDup(int arr[], int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[j]!= arr[i]){
            i++;
            arr[i]=arr[j];
        }
    }
    for(int j=i+1;j<n;j++){
        arr[j]=0;
    }
    return i;
}

int main(){
    int arr[]={1,1,2,2,2,3,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    int size=removeDup(arr,n);
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<"\nthe index:"<<size+1;
}