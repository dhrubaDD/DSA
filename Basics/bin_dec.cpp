#include<bits/stdc++.h>
using namespace std;

int bianrytoDecimal(int n){
    int temp=n;
    int count=0,ans=0;
    while(temp!=0){
        int digit=temp%10;
        ans=ans+digit*pow(2,count);
        temp/=10;
        count++;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the bianry number:";
    cin>>n;
    cout<<n<<" -> "<<bianrytoDecimal(n)<<endl;
}