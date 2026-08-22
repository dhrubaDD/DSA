#include<bits/stdc++.h>
#include<cmath>
using namespace std;

void Digit2(int n){
    int count=(int)log10(n)+1;  // log10(n) gives the number of digits -1
    // typecasting to int to ignore decimal values
    cout<<"No. of digits: "<< count<<endl;
}
void Digit1(int n){
    int count=0;
    while(n>0){
        count++;
        n/=10;
    }
    cout<<"No. of digits: " <<count<<endl;
}
int reverseNum(int n){
    int revN=0;
     cout<<n;
    while(n>0){
        int digit=n%10;
        revN=revN*10+digit;
        n/=10;
    }
    cout<<" -> "<<revN<<endl;
    return revN;

}
bool checkPal(int n){
    int r=0;
    if(n<0 || (n%10==0 && n!=0)) return false;  // for -ve no.s and no. containing 0 at last
    while(r<n){
        r=r*10+n%10;
        n/=10;
    }
    return (r==n || r/10==n);
}
void ArmstrongNum(int n){
    int count=0,temp=n;
    //digits
    while (temp>0){
     count++;
     temp/=10;
    }
    temp=n;
    //power
    int num=0;
    while(temp!=0){
        int digit=temp%10;
        num=num+(digit*digit*digit);
        temp/=10;
    }
    cout<<num<<"-> ";
    if(num==n) cout<<"Yes "<< n<< " is Armstrong."<<endl;
    else cout<<"No! "<< n<<" is not Armstrong! sorry:("<<endl;
    
}
vector<int> Divisors(int n){
    vector<int> v;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
        v.emplace_back(i);
        if(i!=n/i) v.emplace_back(n/i);
        }
        sort(v.begin(),v.end());
    }
    return v;
}
bool checkPrime(int n){
    if(n==0|| n==1) return false ;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i!=0){
        return true;
        break;
        }
        else {return false;} 
    }
}    
int GCD(int a , int b){
    int gcd;
    if(a<b) swap(a,b);
    for(int i=1;i<b;i++){
        if(a%i==0 && b%i==0){
             gcd=i;
        }
    }
    return gcd;
}
int evenlyDivides(int n) {
    // code here
    int count=0;
    int temp=n;
    while(temp>0){
        int digit=temp%10;
        if(digit!=0 && n%digit==0 ){
            count++;
        }
        temp/=10;
    }
    return count;
}


int main(){
    int n=4786300;
    int m=9872789;
    int arm[]={153, 121, 0,1,370, 445,407};
    int prime[]={10,11,23,21,54,71,0};
    //cout<<"Enter a number: ";
    //cin>>n;
    // Digit1(n);
    // Digit2(n);
    //reverseNum(n);
    
    // cout<< checkPal(n)<<endl;
    // cout<< checkPal(m)<<endl;
    
    // for(auto i:arm){
    //     ArmstrongNum(i);
    // }
    
    // vector<int> v= Divisors(36);
    // for(auto i:v){
    //     cout<<i<<" ";
    // }

    // for(auto i:prime){
    //     cout<<i<<" -> " <<checkPrime(i)<<endl;
    // }

    //cout<< GCD(91,17);

    cout<<evenlyDivides(360);

    return 0;
}