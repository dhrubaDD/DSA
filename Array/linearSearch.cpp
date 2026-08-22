//06.08.26
#include<bits/stdc++.h>
using namespace std;

//linear SEarch
int linearSearch(int ar[],int n, int key){
    int i=0;
    int loc=-1;
    while(i<n && ar[i]!=key){
        i++;
    }
    if(ar[i]==key){
        loc=i;
    }
    return loc;
}
int main(){
    int ar[]={1,45,4,7,8,3,21,30};
    int n=sizeof(ar)/sizeof(int);
    int key=21;
    int m=linearSearch(ar,n,key);
    cout<<"The element "<<key<< " found at position "<<m+1;
    return 0;
}