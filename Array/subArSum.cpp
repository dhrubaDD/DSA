//10.08.26
#include<bits/stdc++.h>
using namespace std;

//largest subarray with sum k

//Brute force
int len=-1;
int subArrSumBrute(int arr[], int n, int k){
    for(int i=0;i<n;i++){
        for(int j=i;j<0;j++){
            int sum=0;
            for(int m=i;m<j;m++){
                sum+=arr[m];
            }
            if(sum==k){
                len=max(len,i-j+1);
            }
        }
    }
    return len;
}

//Better: Hashing 
void subArrHash(int arr[], int n, int k){
    int hash[n];
    for(int i=0;i<n;i++){
        if(i==0) hash[i]=arr[i];
        hash[i]=hash[i-1]+arr[i];
    }
    int preSum,b,v;
    for(int i=0;i<n;i++){
        preSum=hash[i]-k;
        for(int j=0;j<i;j++){
            if(preSum==hash[j]){
                len=max(len,i-j);
                if(len<=i-j){
                    b=i;
                    v=j+1;
                }
            }
            else if(preSum==0){
                len=max(len, i-j+1);
            }
        }
    }
    cout<<"The maximum length of teh subarray with sum "<<k<<" is "<<len<<" starting from "<<v<<" to "<<b<<endl;
}

//Optimal
int subArrOpt(int arr[], int n, int k){
    int i=0,j=0;
    int sum=arr[0];
    while(i<0){
        while(j<i && sum<=k){
            sum=sum+arr[j];
        }
    }

}
int main(){
    int arr[]={1,2,3,1,1,1,1,4,2,3};
    int s=subArrSumBrute(arr,10,3);
    cout<<s<<endl;
    subArrHash(arr,10,3);
    return 0;
}