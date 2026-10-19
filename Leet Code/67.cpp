class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.size()-1;
        int j=b.size()-1;
        int carry=0;
        string ans;
        int sum;
        while(i>=0 && j>=0){
            int x=(int)(a[i]-'0');
            int y=(int)(b[j]-'0');

            sum=(x+y+carry)%2;
            carry=(x+y+carry)/2;
            ans.push_back('0'+sum);
            i--;
            j--;
        }
        while(i>=0){
            int x=(int)(a[i]-'0');
            sum = (x+carry)%2;
            carry=(x+carry)/2;
            ans.push_back('0'+sum);
            i--;
        }
        while(j>=0){
            int x=(int)(b[j]-'0');
            sum = (x+carry)%2;
            carry=(x+carry)/2;
            ans.push_back('0'+sum);
            j--;
        }
        if(carry>0) ans.push_back('0'+carry);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
