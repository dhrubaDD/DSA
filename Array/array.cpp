#include<bits/stdc++.h>
using namespace std;

// Check if the array is sorted
void checkSorted(int arr[], int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            cout<<"\nThe array is not sorted!";
            return;
        }

    }
    cout<<"\nThe array is sorted:)";
}

//Rotate the array by k places
void rotateArray(int arr[],int n, int d){
    d=d%n;
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=n-d;i<n;i++){
        arr[i]=temp[i-n+d];
    }
    cout<<"\nThe array after reversal: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
//OPTIMAL APPROACH (using reverse function)
void rotArr(int arr[],int n, int d){
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
     cout<<"\nThe array after reversal: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


// Move all the 0s at the end of the array

int main(){
    int a[]={1,2,3,0,4,0,5};
    int ua[]={5,7,1,23,8};
    int n1=sizeof(a)/sizeof(int);
    int n2=sizeof(a)/sizeof(int);

    // checkSorted(a,n1);
    // checkSorted(ua,n2);
    // rotateArray(a,n1,6);
    // rotateArray(ua,n2,3);
    // rotArr(a,n1,1);
}