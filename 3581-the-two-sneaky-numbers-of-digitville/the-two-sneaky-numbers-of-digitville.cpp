class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> count(nums.size(), 0);
        vector<int> ans;
        int n=nums.size();

        for(int x : nums){
            count[x]++;
        }
        for(int i=0; i<n; i++){
            if(count[i]==2){
                ans.push_back(i);
            }
        }
        return ans;
    }
};