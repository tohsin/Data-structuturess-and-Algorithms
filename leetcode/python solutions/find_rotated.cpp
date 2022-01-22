class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto len=nums.size();
        if(nums.empty()) return -1;
        if(nums[len-1]==target) return len-1;
        if(nums[0]==target) return 0;
        int left =0;
        int right = len-1;
        while(left<right){
            int mid=left+((right-left)/2);
            if(nums[mid]>nums[right]) 
                left=mid+1;
           else
               right=mid;
        }
        if(nums[left]==target) return left;
        
        if (target>nums[len-1]){
            left=0;
            right=right-1;
        }else{
            left=left;
            right=len-1;
        }
        while(left<=right){
            int mid=left+((right-left)/2);
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]<target){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return -1;
    }
};