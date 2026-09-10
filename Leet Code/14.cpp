class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string s="";
        for(int i=0;i<strs[0].size();i++){
            char ch=strs[0].at(i);
            
            for(int j=1;j<strs.size();j++){
                if(i>=strs[j].size() || ch!=strs[j].at(i)){
                    return s;
                }
                
            }
            s+=ch;
        }
        return s;
    }
};
