class Solution {
public:
    long long countCommas(long long n) {
        long long temp=n;
        int digit=0;
        //digit count
        while(temp!=0){
            digit++;
            temp/=10;
        }
        int x= (digit-1)/3;
        temp=n;
        //
        long long ans=0;
        for(int i=x;i>0;i--){
            ans+= (temp-pow(1000,i)+1)*i;
            
        }
    }
};