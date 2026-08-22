//06.08.26

#include<iostream>
using namespace std;

//moving 0 to the end
void swap(int* a, int* b){
    int temp= *a;
    *a=*b;
    *b=temp;
}
void moveZero(int ar[],int n){
    int i=0,j=0;
    while(i<n && j<n){
        while(ar[j]!=0)j++;
        while( i<j|| ar[i]==0) i++;
        swap(&ar[i],&ar[j]);
        i++;
        j++;
    }
}
int main(){
   int arr[]={1,0,2,3,2,0,0,4,5,1};
   int n=sizeof(arr)/sizeof(int);
    moveZero(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}