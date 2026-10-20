class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxValue=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                int product = (nums[i]-1) * (nums[j]-1);
                
                if(product > maxValue)
                {
                    maxValue = product;
                }
            }
        }
        return maxValue;
    }
};