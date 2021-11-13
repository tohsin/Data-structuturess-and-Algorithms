
#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

struct values{
    int l;
    int r;
};
class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        auto len=nums.size();
        if(nums.empty()) return -1;
        if(nums[len-1]==target) return nums[len-1];
        if(nums[0]==target) return nums[0];
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


int main() {
    // insert code here...
    std::vector<int> dummydata={4,5,6,7,0,1,2};
    std::vector<int> dummydata2={4,5,6,7,8,1,2,3};
    
    Solution *soln=new Solution();
    int index=soln->search(dummydata2,8);
    std::cout<<index<<std::endl;
    return 0;
}