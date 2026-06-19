class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int left=0;
        int right=n-1;
        while(left<=right){
            if(nums[left]==val){
            swap(nums[left],nums[right]);
            right--;  // we dont move left because.."what if after swaping als0 we get same value as val again, we need new element in front so we have to make sure that we move right pointer to get unique element at the front
        }
        else {
            left++;//if not equal to val toh aage badho
        }
        }//while
        return left;
    }
};