class Solution {
public:

vector<vector<int>>vec;
bool c[10] = {false};
void rec(vector<int>&drive , vector<int>&original  ){

if(drive.size() == original.size()){
    vec.push_back(drive);
    return;
}
for(int i = 0 ;i < original.size() ; i ++ ){
if(c[i])continue ;
c[i] = true;
drive.push_back(original[i]);
rec(drive , original);
drive.pop_back();
c[i] = false;

}

}
    vector<vector<int>> permute(vector<int>& nums) {
vector<int>v;
rec(v , nums);

return vec;

    }
};
