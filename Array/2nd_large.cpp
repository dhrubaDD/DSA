#include<iostream>
using namespace std;

void secondLargest(int arr[], int n){
    int large,slarge;
    large=arr[0];
    slarge=INT8_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]>large){
            slarge=large;
            large=arr[i];
        }
        else if(arr[i]<=large && arr[i]>slarge){
            slarge=arr[i];
        }
        else continue;
    }
    cout<<"The second largest element of the array is:" << slarge<<endl;
}
int main(){
    int arr[]={7,7,7,7,7,7,5,6};
    int n=sizeof(arr)/sizeof(int);
    secondLargest(arr,n);
}