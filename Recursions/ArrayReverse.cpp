#include<bits/stdc++.h>
using namespace std;

void reverse(int ar[],int start,int n){
    if(start>=n-1) return;
    swap(ar[start],ar[n-1]);
    reverse(ar,start+1,n-1);
}

void reverseArray(int ar[],int n){
    if (n <= 1) return;

    swap(ar[0], ar[n - 1]);
    reverseArray(ar + 1, n - 2);
}



int main(){
int ar[]={2,4,7,1,9,5};
int n=sizeof(ar)/sizeof(int);
for(int i=0;i<n;i++){
    cout<<ar[i]<<" ";
}cout<<endl;
   
    
reverse(ar,0,n);

for(int i=0;i<n;i++){
    cout<<ar[i]<<" ";
}cout<<endl;


reverseArray(ar,n);
for(int i=0;i<n;i++){
    cout<<ar[i]<<" ";
}cout<<endl;
}