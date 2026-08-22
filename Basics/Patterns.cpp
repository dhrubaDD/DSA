#include<bits/stdc++.h>
using namespace std;
void pattern1(int n){
      
    for(int i=0; i<n;i++){               //* * * * *
        for(int j=0;j<n;j++){            //* * * * *
            cout<<"* ";                  //* * * * *
        }                                //* * * * *
        cout<< endl;                     //* * * * *
    }
}
void pattern2_1(int n){
    for( int i=0;i<n;i++ ){             //*
        for(int j=0;j<=i;j++){          //* *
            cout<<"* ";                 //* * *
        }                               //* * * *    
        cout<<endl;
    }
}
void pattern2_2(int n){
    for(int i=0;i<n;i++ ){                  // 1
        for(int j=0;j<=i;j++){              // 1 2
            cout<<j+1<<" " ;            // 1 2 3
        }                               // 1 2 3 4
        cout<<endl;
    }

}
void pattern3(int n){
    for(int i=0;i<n;i++ ){                    // 1
        for(int j=0;j<=i;j++){                // 2 2
            cout<<i+1<<" " ;              // 3 3 3
        }                                 // 4 4 4 4
        cout<<endl;
    }
}
void pattern4(int n){}
int main(){
    int i,j,n=5,m=5;
    //cout<<"Enter the rows and column: ";
    //cin>>n>>m;

    // for(i=0;i<n;i++ ){                    // 1
    //     for(j=0;j<=i;j++){                // 2 2
    //         cout<<i+1<<" " ;              // 3 3 3
    //     }                                 // 4 4 4 4
    //     cout<<endl;
    // }
    // ________________________________

    // for(i=0;i<n;i++){                       // * * * * *
    //     for(j=i;j<n;j++){                   // * * * * 
    //         cout<<"* ";                     // * * *
    //     }                                   // * *
    //     cout<< endl;                        // *
    // }
    // ________________________________

    // for(i=0;i<n;i++){                       // 1 2 3 4 5
    //     for(j=i;j<n;j++){                   // 1 2 3 4
    //         cout<<j+1<<" ";                 // 1 2 3
    //     }                                   // 1 2
    //     cout<< endl;                        // 1
    // }
    // ________________________________
    // Q.7
    // for(i=0;i<n;i++){                             //  *
    //     for(j=0;j<n-i;j++){                      //  ***
    //         cout<<" ";                          //  *****        
    //     }                                      //  *******
    //     for(j=0;j<=i;j++){                    //  ********* 
    //         cout<<"*";
    //     }
    //     for(j=0;j<i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // ________________________________

    // Q.8
    // for(i=0;i<n;i++){                       // *********
    //     for(j=0;j<i;j++){                   //  *******
    //         cout<<" ";                      //   *****
    //     }                                   //    ***
    //     for(j=i;j<n;j++){                   //     *    
    //         cout<<"*";
    //     }
    //     for(j=i;j<n-1;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // ________________________________

    // Q.9
    // for(i=0;i<2*n;i++){                             
    //   if(i<n){                                    //  *
    //     for(j=0;j<n-i-1;j++){                    //  ***
    //         cout<<" ";                          //  *****        
    //     }                                      //  *******
    //     for(j=0;j<=i;j++){                    //  ********* 
    //         cout<<"*";
    //     }
    //     for(j=0;j<i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    //   }
    //   else{                                 //  ********* 
    //      for(j=n;j<i;j++){                   //  *******
    //         cout<<" ";                       //   *****
    //     }                                    //    ***
    //     for(j=i;j<2*n;j++){                  //     *    
    //         cout<<"*";
    //     }
    //     for(j=i;j<2*n-1;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl; 
    //   }
    // }
    // _________________________________
    

    // Q.10
    // for(i=0;i<2*n-1; i++){
    //     if(i<n){
    //         for(j=0;j<=i;j++){
    //           cout<<"*";
    //         }
    //     }
    //     else{
    //         for(j=i;j<2*n-1;j++){
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }
    // _________________________________


    // Q.11
    // for(i=1;i<n+1;i++){
    //     if(i%2==1){
    //         for(j=1;j<=i;j++){
    //             if(j%2==1){
    //                 cout<<"1 ";
    //             }
    //             else{
    //                 cout<<"0 ";
    //             }
    //         }
    //     }
    //     else{
    //         for(j=1;j<=i;j++){
    //             if(j%2==1){
    //                 cout<<"0 ";
    //             }
    //             else{
    //                 cout<<"1 ";
    //             }
    //         }        

    // Q.12
    // int count=1;
    // for(i=0;i<n;i++ ){                   //1
    //     for(j=0;j<=i;j++){              // 2 3 
    //         cout<<count<<" " ;         //  4 5 6
    //         count++;                  //   7 8 9 10
    //     }                            //    11 12 13 14
    //     cout<<endl;
    // }


    // Q.13
    // for(i=0;i<n;i++ ){                  
    //     char c ='A';
    //     for(j=0;j<=i;j++){    // Alternate Aproach-             
    //         cout<<c<<" ";                     //   for(char a='A';a<='A'+i;a++){  
    //         c++;                       //     cout<<a;
    //     }                                   
    //     cout<<endl;
    // }
    // _________________________________
       
    
    



return 0;
}