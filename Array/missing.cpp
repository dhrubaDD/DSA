// 10.08.26
#include<bits/stdc++.h>
using namespace std;

// Missing number: ar[]={1,2,4,5} and N=5 find the missing number from the array

//Brute
int missingNumBrute(int arr[],int n){
    for(int i=1;i<=n;i++){
        int flag=0;
        for(int j=0;j<n;j++){
            if(arr[j]==i){
                flag=1;
                break;
            }
        }
        if(flag==0) return i;
    }
}

//Better-> hashing
int missingNumHash(int arr[],int n){
    int hash[n+1]={0};
    for(int i=0;i<n-1;i++){
        hash[arr[i]]=1;
    }
    for(int i=1;i<=n;i++){
        if(hash[i]==0){
            return i;
        }
    }
}

//OPTIMAL: SUM
int missingNumSum(int arr[],int n){
    int expSum=n*(n+1)/2;
    int totalSum=0;
    for(int i=0;i<n-1;i++){
        totalSum=totalSum+arr[i];
    }
    return expSum-totalSum;
}

//OPTIMAL: XOR
int missingNumXor(int arr[],int n){

}
int main(){
    int arr[]={1,2,4,5};
    int n=5;
    cout<<missingNumBrute(arr,n)<<endl;
    cout<<missingNumHash(arr,n)<<endl;
    cout<<missingNumSum(arr,n)<<endl;
    //cout<<missingNumBrute(arr,n)<<endl;
    return 0;
}