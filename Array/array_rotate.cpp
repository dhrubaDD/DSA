#include<iostream>
using namespace std;

// Normal Approach
void leftRotate(int arr[], int n, int k){
    k=k%n;
    int temp[k];
    int m=0;
    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }
    for(int i=k;i<n;i++){
        arr[i-k]=arr[i];
        m++;
    }
    for(int i=0;i<k;i++){
        arr[m]=temp[i];
        m++;
    }
}
//Crazy Approach
void reverse(int arr[],int start,int end){
    int j=end-1;
    for(int i=start;i<=j-i+start;i++){
        int temp=arr[i];
        arr[i]=arr[j-i+start];
        arr[j-i+start]=temp;
    }
    return;
}
void leftR2(int arr[], int n,int k){
    reverse(arr,0,k);
    reverse(arr,k,n);
    reverse(arr,0,n);
    return;
}

//Main
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(int);

    int k=3;
    leftR2(arr,n,k);
    for(int i:arr){
        cout<<i<<" ";
    }
    int arr2[]={1,0,2,0,3,1,2,0,4,2,5,7};
}