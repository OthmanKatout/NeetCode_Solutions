class Solution {
public:
    bool isAnagram(string s, string t) {
        
        map<char , int>cnt;
        map<char , int>cnt2;
        for(int i = 0 ;i < s.size() ;i ++ ){
            cnt[s[i]]++;
        }
        for(int i = 0 ;i < t.size() ; i++){
            cnt2[t[i]]++;
        }

        for(auto it : cnt){
            if(cnt[it.first] != cnt2[it.first]){
                return false;
            }
        }
        for(auto it : cnt2){
            if(cnt[it.first] != cnt2[it.first]){
                return false;
            }
        }
        return true;


    }
};
