#include<bits/stdc++.h>
using namespace std;


// Hashing using Map
// the benefit of map to array is that we are not declaring all the values. only the key values are stored in memeory
//i.e. <2,20>, <3,30>, <12,120> here only 2,3,12 is stored; not any other values...rest of the values are assigned 0

// even for better usage of time use unordered_map
// Time Complexity is O(1) O(1) O(N)
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
   // pre-computing
   map<int,int> m;     
   for(int i=0;i<n;i++){
      m[arr[i]]++;
   }
   cout<<"Enter number of elements to search for:";
   int ch;
   cin>>ch;
   cout<<"Here you go:"<<endl;
   while(ch--){
      int num;
      cin>> num;
      cout<<num<<"->"<<m[num]<<endl;
   }
}