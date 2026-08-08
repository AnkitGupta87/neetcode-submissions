class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> help;
        for(int i=0; i<s.size(); i++){
            help[s[i]]++;
        }
        for(int i=0; i<t.size(); i++){
            help[t[i]]--;
        }
        for(auto i : help){
            if(i.second != 0){
                return false;
            }
        }
        return true;
    }
};
