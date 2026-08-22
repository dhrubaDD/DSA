#include<bits/stdc++.h>
using namespace std;

int i=1;
void printNum(int n){
    if (i==n+1) return;
    cout<<i<<" ";
    i++;
    printNum(n);
}
void printNumbers(int n) {
      // Your code goes here
      if(n==0) return;
      cout<<n<<" ";
      n--;
      printNumbers(n);

    }
int sumN(int n){
    if(n==1) return 1;
    return n+sumN(n-1);
}


int main(){
    // printNum(10);
    //printNumbers(10);
    //cout<<"5 -> "<< sumN(5);
   
}