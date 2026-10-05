class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length()!=word2.length()) return false;

        unordered_map<char,int> m1,m2;
        for(char ch:word1){
            m1[ch]++;
        }
        for(char ch:word2){
            m2[ch]++;
        }
        if(m1.size()!=m2.size()) return false;

        vector<int> v1,v2;
        for(auto a:m1){
            v1.push_back(a.second);
        }
        for(auto a:m2){
            v2.push_back(a.second);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        if(v1!=v2) return false;

        for(auto [key,value]:m1){
            if(m2.find(key)==m2.end())return false;
        }
        return true;

    }
};
