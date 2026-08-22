#include<iostream>
using namespace std;

int decTobinary(int n){
    int temp=n;
    int ans=0,pow=1;
    while(temp!=0){
        int rem=temp%2;
        ans=ans+rem*pow;
        pow*=10;
        temp/=2;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the Decimal number:";
    cin>>n;
    cout<<n<<" -> "<<decTobinary(n)<<endl;
}