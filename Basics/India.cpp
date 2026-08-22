#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n =30,m=56;
    // cout<<"Enter the rows and column: ";
    // cin>>n>>m;

  int p=4;
  int count=0;
  for(j=0;j<10;j++){
        cout<<" ";
    }
  cout<<"/\\ "<<endl;
  for(i=0;i<n;i++){
    // to create the flag at a gap from the margin
     for(j=0;j<10;j++){
        cout<<" ";
    }
    // creating the post
        cout<<"||";

    // borders of the three colors    
    if(i==0 || i%p==0 && i<=p*3){  
        for(j=0;j<m;j++)
         cout<<"~";
      cout<<"|";   //the border at the other side  
     }
    
    // borders of the other side
    else if(i<=p*3 && i!=3*p/2){
        for(j=0;j<m/2;j++){
            if(i>0&&i<p){
                 cout<<"#";
            }
            else if(i>p*2&&i<p*3){
                 cout<<"*";
            }
            cout<<" ";
        }
        cout<<"|";    
     }  

          
    if(i==3*p/2){
         for(j=0;j<(m/2)-2;j++)
            cout<<" ";
            cout<<"-{*}-";
        for(j=0;j<(m/2)-3;j++)
            cout<<" ";
            cout<< "|";        
        }
       
     cout<<endl;
  }
    for(int k=0;k<5;k++){
       for(j=0;j<m+10;j++){
        cout<<"^";
       }
       cout<< endl;
    }





return 0;
}