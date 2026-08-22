#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    if(n<=1) return 1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int main(){
    int choice=1;
    while(choice!=-1){
        cout<<"Enter 1 to run the code and -1 to stop:";
        cin>>choice;
        if(choice==-1){
            cout<<"Exiting program!!";
            break;
        }
        int n;
        cout<<"Enter the number: ";
        cin>>n;
        int ans=factorial(n);
        cout<<"Factorial of "<<n<<" is:"<<ans<<endl;
    }
return 0;
}