class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(int i=0; i<s.size(); i++){
            char c = s[i];
            if(!isalnum(c)) continue;
            str.push_back(tolower(c));
        }

        int st = 0, en = str.size()-1;
        while(st<en){
            if(str[st] == str[en]){
                st++;
                en--;
                continue;
            }
            else{
                return false;
            }
        }

        return true;
    }
};
