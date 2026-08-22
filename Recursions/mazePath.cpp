#include<bits/stdc++.h>
using namespace std;

//Q. Imagine a maze where a man has move across diagonally. He can make his move in right and downways only. Calculate 
//   how many ways are there to move such.

int maze(int row, int clm){
    int r =0, d=0;

    //base case
    if(row==1 && clm==1) return 1;

    // recursive case 
    // Case 1
    if(row==1 && clm>1){
        r+= maze(row,clm-1);
    }// Case 2
     if(row>1 && clm==1){
        d+= maze(row-1,clm);
    }// Case 3
     if(row>1 && clm>1){
        r+= maze(row,clm-1);
        d+= maze(row-1,clm);
    }
    int totalWays=r+d;
    return totalWays;

}

int main(){
    int m,n;
    cout<<"\nEnter no. of rows: ";
     cin>>m;
    cout<<"\nEnter no. of column: ";
     cin>>n;
    int ways=maze(m,n);
    cout<< "No. of ways to cross the maze is: "<< ways;
    return 0;
}
