class Solution {
public:
    int maxProduct(vector<int>& nums) {
        vector<int>sol;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int x=(nums[i]-1)*(nums[j]-1);
                sol.push_back(x);
            }
        }
        sort(sol.begin(),sol.end());
        int k=sol.size();

        return sol[k-1];
    }
};