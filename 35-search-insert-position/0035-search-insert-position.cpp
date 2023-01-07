class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
     
        int end = nums.size()-1;
        int start = 0; 
        
        while (end>=start){
            int  mid = start + (end-start)/2;
            if (nums[mid]<target)
                start = mid+1;
            else end = mid-1;
        }
        return start;
    }
};