#include<iostream>
using namespace std;

void function(int n){
    if(n==0) return ;
    cout<<n<<endl;
    function(n-1);
    cout<<n<<endl;
    return;
}
int main(){
    function(5);
    return 0;
}