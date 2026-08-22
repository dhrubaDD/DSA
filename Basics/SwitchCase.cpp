#include<bits/stdc++.h>
using namespace std;    

int main(){
   int choice, stop=0;
    cout<<"Enter your choice (1 or 2): ";
    cin>> choice;
 
    switch(choice){
        case 1:
            cout<<"You selected option 1"<<endl;
            break;
        case 2:
            cout<<"You selected option 2"<<endl;
            break;
        default:
            cout<<"Invalid choice"<<endl;
    }

    return 0;


}
    