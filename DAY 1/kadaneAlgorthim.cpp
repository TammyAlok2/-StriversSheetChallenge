class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int min = INT_MIN;
        int product = 1;
        for(int i=0;i<n;i++){
        product = product * nums[i];
            if(product > min){
                min= product;
            }
            if(product < 0){
                product = 1;
            }
        }
        return product;
    }
};