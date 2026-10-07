// Lucky 13

class Solution {
public:
    int romanToInt(string s) {
        int d;
        int ans=0;
        int last=0;
        for(char ch:s){
            if(ch=='I') d=1;
            else if(ch=='V') d=5;
            else if(ch=='X') d=10;
            else if(ch=='L') d=50;
            else if(ch=='C') d=100;
            else if(ch=='D') d=500;
            else d=1000;
            
            if(last<d) d=d-2*last;
            ans+=d;
            last=d;
        }
        return ans;
        
    }
};
