class Solution {
public:
    bool isAnagram(string s, string t) {
         
        map<char , int>cnt1 , cnt2;

        for(int i = 0 ;i < s.size() ;i ++){
            cnt1[s[i]] ++;
        }

        for(int i = 0 ;i < t.size() ;i ++){
            cnt2[t[i]] ++;
        }

        for(int i = 0 ;i < s.size() ;i ++){
            if(cnt1[s[i]] != cnt2[s[i]])return false;
        }

        if(cnt1.size() != cnt2.size())return false;
        return true;


    }
};
