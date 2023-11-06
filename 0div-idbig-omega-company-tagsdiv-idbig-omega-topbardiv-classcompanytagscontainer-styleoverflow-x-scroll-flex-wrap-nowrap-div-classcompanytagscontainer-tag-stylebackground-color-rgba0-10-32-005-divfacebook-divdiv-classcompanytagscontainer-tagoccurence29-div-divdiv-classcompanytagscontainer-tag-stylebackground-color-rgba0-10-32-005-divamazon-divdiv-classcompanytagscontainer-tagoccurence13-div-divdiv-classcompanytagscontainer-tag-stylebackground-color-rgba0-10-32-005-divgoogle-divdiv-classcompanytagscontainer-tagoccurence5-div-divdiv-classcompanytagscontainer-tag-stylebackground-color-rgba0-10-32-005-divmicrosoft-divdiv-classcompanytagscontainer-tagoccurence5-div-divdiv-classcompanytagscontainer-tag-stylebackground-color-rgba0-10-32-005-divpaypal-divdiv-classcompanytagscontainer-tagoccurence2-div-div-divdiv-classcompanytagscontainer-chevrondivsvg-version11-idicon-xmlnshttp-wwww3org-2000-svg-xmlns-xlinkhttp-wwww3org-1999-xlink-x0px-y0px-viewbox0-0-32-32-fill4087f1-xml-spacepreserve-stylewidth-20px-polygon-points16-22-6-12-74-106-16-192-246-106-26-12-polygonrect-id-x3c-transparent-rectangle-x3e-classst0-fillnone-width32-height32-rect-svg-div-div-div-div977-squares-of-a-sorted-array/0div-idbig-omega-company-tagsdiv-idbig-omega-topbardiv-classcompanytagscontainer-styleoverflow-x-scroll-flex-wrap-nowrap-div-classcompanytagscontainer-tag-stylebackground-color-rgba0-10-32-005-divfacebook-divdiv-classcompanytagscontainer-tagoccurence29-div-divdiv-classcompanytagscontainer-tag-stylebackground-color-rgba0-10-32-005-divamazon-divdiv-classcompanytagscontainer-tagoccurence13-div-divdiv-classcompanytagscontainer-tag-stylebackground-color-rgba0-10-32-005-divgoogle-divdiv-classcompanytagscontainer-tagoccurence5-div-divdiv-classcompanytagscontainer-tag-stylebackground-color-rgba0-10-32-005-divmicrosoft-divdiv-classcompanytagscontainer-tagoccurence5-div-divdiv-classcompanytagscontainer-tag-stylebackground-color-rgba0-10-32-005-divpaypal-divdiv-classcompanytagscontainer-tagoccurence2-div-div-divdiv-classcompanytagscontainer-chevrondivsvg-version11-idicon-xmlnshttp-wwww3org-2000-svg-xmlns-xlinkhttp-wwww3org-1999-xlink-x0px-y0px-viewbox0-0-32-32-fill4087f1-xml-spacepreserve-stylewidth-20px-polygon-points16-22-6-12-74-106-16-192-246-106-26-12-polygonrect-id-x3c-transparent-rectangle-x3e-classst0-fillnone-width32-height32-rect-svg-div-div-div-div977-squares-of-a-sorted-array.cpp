class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> vec(n);
        int left = 0;
        int right = n-1;
        int pos = n-1;
        while(left<=right){
        if(abs(nums[left])<abs(nums[right])){
            vec[pos--] = nums[right]*nums[right];
            right--;
        }
        else{
            vec[pos--] = nums[left]*nums[left];
            left++;
        }
    }
        return vec;}
};