#include<bits/stdc++.h>
using namespace std;

void display(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void merge(int arr[],int low, int mid, int high){
    int left=low, right=mid+1;
    int temp[100]={0};
    int i=0;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp[i]=arr[left];
            left++;
            i++;
        }
        else{
            temp[i]=arr[right];
            right++;
            i++;
        }
    }
    while(left<=mid){
        temp[i]=arr[left];
        left++;
        i++;
    }
    while(right<=high){
        temp[i]=arr[right];
        right++;
        i++;
    }
    display(temp,5);
   for(int j=low; j<=high;j++){
        arr[j]=temp[j-low];
   }
}

void mergeSort(int arr[],int low, int high){
    if(low>=high) return;
    int mid=(low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
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
    mergeSort(arr,0,n-1);
    cout<<"The array after sorting is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}