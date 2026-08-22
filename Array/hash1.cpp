#include<bits/stdc++.h>
using namespace std;

// Hash Table using array...

int hashh[10000000]; // maximum 10^7 can be declared as the size of the array globally.
int main(){
   int n;
   cout<<"Enter number of elements: ";
   cin>>n;
   cout<<"Enter the values:";
   
   // element array
   int arr[100];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }

   // pre-storing or precoumputing
   //int hash[12]={0}; //  12-1=11 is the highest element in the array i.e. max element
   for(int i=0;i<n;i++){
    hashh[arr[i]]+=1;
   }

   int m;
   cout<<"Enter number of entries to search for:"<<endl;
   cin>>m;
   cout<<"Enter the values to search for:"<<endl;
   while(m--){ // m--decrements value of m until m=0
    int num;
    cin>>num;
    //fetching
    cout<<num<<" ->"<<hashh[num]<<endl;
   }
   cout<<endl;


}