class Solution {
public:

set<vector<int>>st;
void rec(vector<int>&d , vector<int> & o , int index ){

if(index == o.size()){
    st.insert(d);
    return;
}

d.push_back(o[index]);
rec(d , o , index + 1);
d.pop_back();
rec(d , o , index + 1);

}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
vector<int>v;
sort(nums.begin() , nums.end());
rec(v , nums , 0);
vector<vector<int>>vec;
for(auto it : st){
    vec.push_back(it);
}
return vec;
    }
};
