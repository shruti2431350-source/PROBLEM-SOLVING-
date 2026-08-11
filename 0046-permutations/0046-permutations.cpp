class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        fun(nums,0,n-1);
        return res;
    }
    void fun(vector <int>& nums,int i, int n ){
        if(i==n){
            res.push_back(nums);
            return;
        }

        for(int j=i; j<=n;j++){
            swap(nums[i], nums[j]);
            fun(nums, i+1, n);
            swap(nums[i], nums[j]);
        }
    }
};