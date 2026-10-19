class Solution {
public:
    int sum(int num){
        int temp=num,digSum=0;
        while(temp>0){
            digSum+=(temp%10);
            temp/=10;
        }
        int n;
        if(digSum>=10) n=sum(digSum);
        else n=digSum;
        return n;
    }
    int addDigits(int num) {
        int ans = sum(num);
        return ans;
    }
};
