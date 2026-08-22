#include<bits/stdc++.h>
using namespace std;

int expo(int a, int b){
    if(b==0) return 1;
    return a*expo(a,b-1);
}

int main(){
    cout<<" "<<expo(2,10)<<endl;
}