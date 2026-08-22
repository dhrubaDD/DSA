#include<iostream>
using namespace std;

//no. of ways to reach the nth stair if single and double steps are allowed
int stair(int n){
    // base case
    if(n<=2) return n;
    //recursive case
    return stair(n-1)+stair(n-2);
}
int main(){
    int m=6;
    cout<<stair(m);
}