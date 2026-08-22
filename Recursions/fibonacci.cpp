#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    //base case
    if(n<=1) return n;

    //recursive case
    return fibonacci(n-1)+fibonacci(n-2);

}
void fibSeries(int n){
   
    
}


int main(){
    cout<<fibonacci(20)<<endl;
    //fibSeries(8);Ṇ
}