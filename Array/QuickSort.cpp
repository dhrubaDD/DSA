#include<bits/stdc++.h>
using namespace std;


void swap(int* a, int* b){
    int temp= *a;
    *a=*b;
    *b=temp;
}
int partition(int arr[],int low, int high){
    int pivot=arr[low];
    int i=low,j=high;
    while(i<j){
        while(arr[i]<=pivot && i<high){
            i++;
        }
        while(arr[j]>pivot && j>low){
            j--;
        }
        if(i<j){
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[low],&arr[j]);
    return j;
}
void quickSort(int arr[],int low, int high){
    if(low>=high) return;
    int p=partition(arr,low,high);
    quickSort(arr,low,p-1);
    quickSort(arr,p+1,high);
}

int main(){
    int arr[100];
    int n;
    cout<<"Enter number of the elements in the array:";
    cin>>n;
    cout<<"\nEnter the elements of the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quickSort(arr,0,n-1);
    cout<<"The array after sorting is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}