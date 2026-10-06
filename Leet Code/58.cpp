class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=0;
        int lastcount=0;
        int count=0;
        while(i<=s.size()){
            if(s[i]==' ' && count!=0) lastcount=count;
            else if(s[i]=='\0' && count!=0) return count;
            if(s[i]==' '){
                count=0;
                i++;
                continue;
            }
            i++;
            count++;
        }
        return lastcount;
    }
};
