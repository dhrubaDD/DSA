#include<bits/stdc++.h>
using namespace std;

int powerLog(int x, int y){
    if(y==1) return x;
    int a=powerLog(x,y/2);
    if(y%2==0){
     return a*a;
    }
    else return a*a*x;
    
}

int main(){
    int x=2,y=10,ans=powerLog(x,y);
    cout<<x<<"^"<<y<<" = "<<ans;
}