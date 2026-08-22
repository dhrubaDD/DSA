#include<bits/stdc++.h>
#define SIZE 25
using namespace std;

int hashh[SIZE];
int main(){
    string s;
    cout<<"Enter a string:";
    cin>>s;
    

    // prestoring || precomputing
    for(char c:s){
        hashh[c-'a']++;
    }
    int m;
    cout<<"Enter number of entries to search for:";
    cin>>m;
    cout<<"Enter the values to search for:";
    while(m--){ // m--decrements value of m until m=0
        char c;
        cin>>c;
        //int n= c-'a';
        //fetching
        cout<<c<<" -> "<<hashh[c-'a']<<endl;
    }
    return 0;
}