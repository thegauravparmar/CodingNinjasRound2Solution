class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        vector<int> ans;
        int n = nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            if(m[nums[i]]>(n/3)){
                ans.push_back(nums[i]);
                m[nums[i]]=0;
            }
        }
        return ans;
    }
};