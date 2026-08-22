#include<bits/stdc++.h>
using namespace std;
#define size 10
int arr[size];

void display(int arr[], int n);
void swap(int &a, int &b){
    int temp=a;
    a=b;
    b= temp;
}

//Selection Sort
//The smallest element is selected and put in the front
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]) min=j;
        }
        swap(arr[min],arr[i]);
        // display(arr,n);
    }
}
//Bubble sort
//The largest element bubbles up at the last pos
void bubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
        }
        // display(arr,n);
    }
}
//Insertion Sort
//Inserts the element at ith pos at its suitable position
void insertionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j],arr[j+1]);
            j--;
        }
    }
}


int main(){
    int arr[]={13,46,24,52,20,9};
    int n=sizeof(arr)/sizeof(int);
    // selectionSort(arr,n);
    bubbleSort(arr,n);
    display(arr,n);
    insertionSort(arr,n);
    return 0;
}

// display
void display(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}