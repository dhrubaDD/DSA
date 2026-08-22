#include<bits/stdc++.h>
using namespace std;
void towerofHanoi(int n,char s, char h, char d){
   if(n==0) return;
    towerofHanoi(n-1,s,d,h);
    cout<<s<<" -> "<<d<<endl;
    towerofHanoi(n-1,h,s,d);
    return;

}
int main(){
    int n;
    cout<<"Enter no. of disks: ";
    cin>>n;
    towerofHanoi(n,'A','B','C');
    return 0;
}